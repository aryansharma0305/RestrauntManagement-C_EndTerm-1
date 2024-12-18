#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "linked_list.h"
#include "file_handler.h"
#include "customer.h"

Table reserve;
Order new_Order={0};
// LONG LONG
CurrentOrders* createOrder(char name[100], char phone[11],int people, CurrentOrders* currentOrders, OrderHistory* orderHistory, long long int* orderID, Tables* tables){
    
    logAction("customer.c", "createOrder");
    logAppAction("Admin", "Created an Order");

    *orderID=lenCurrentOrders(currentOrders)+lenOrderHistory(orderHistory)+1;
    char* time,*date;

    if(strlen(name)==0 || !strcmp(name,"\n")){
        fprintf(stderr,"\a\nFATAL ERROR! INVALID NAME!\n");
        return NULL;
    }

    new_Order.orderID=*orderID;

    strcpy(new_Order.name,name);    
    strcpy(new_Order.phone,phone);

    new_Order.people=people;
    long int futureTableNo=0;

    for(int index=0;index<100;index++){
         new_Order.itemIDs[index]=0;
    }
    
    time=getTime();
    date=getDate();

    strcpy(new_Order.orderTime,time);
    strcpy(new_Order.orderDate,date);


    new_Order.tableNo=futureTableNo;

    CurrentOrders* temp = currentOrders;
    CurrentOrders* new_node = malloc(sizeof(CurrentOrders));
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed for new node.\n");
        return currentOrders;
    }

    new_node->order=new_Order;
    new_node->next=NULL;

    if(temp==NULL){
		temp=new_node;
		return temp;
	}

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;

    updateCurrentOrders(currentOrders);

    return currentOrders;
}

Tables* reserveTable(long long int orderID, int people, Tables* tables, CurrentOrders* currentOrders, long int* futureTableNo){

    logAction("customer.c", "reserveTable");
    logAppAction("Customer", "Reserved a Table");

    Tables* tempTable=tables;
    int restaurant_full=0;
    int already_reserved_flag=0;
   

    while(tempTable->next!=NULL){
        if(tempTable->table.available==1 && tempTable->table.capacity>=people){
            *futureTableNo=tempTable->table.tableNo;
            tempTable->table.available=0;
            restaurant_full=1;
            break;
        }

        tempTable=tempTable->next;
    }

    if(restaurant_full==0){
        fprintf(stderr,"\a\nSORRY!WE DO NOT HAVE ANY ACCOMODATIONS AVAILABLE!\n");
        *futureTableNo=-1;
        return tables;
    }

    
    updateTables(tables);
    return tables;
    
}

CurrentOrders* makeOrder(long long int itemID, CurrentOrders* currentOrders, long long int orderID){

    logAction("customer.c", "makeOrder");
    logAppAction("Customer", "Ordered items");

    CurrentOrders* temp=currentOrders;
    while(temp!=NULL){
          if(temp->order.orderID==orderID){
                for(int index=0;index<100;index++){
                    if(temp->order.itemIDs[index]==0){
                    temp->order.itemIDs[index]=itemID;
                    break;
                    }
                }
            break;
          }
        temp=temp->next;
    }
    updateCurrentOrders(currentOrders);
    return currentOrders;
}








//-------------------------------------------------------------------------------------------//

//TEST CASES TO CHECK IF THE CODE IS WORKING(LAST CHECKED: SUCCESSFUL)

/*Tables* initializeTables() {
    Tables *tables = malloc(sizeof(Tables));
    tables->table.tableNo = 1;
    tables->table.capacity = 4;
    tables->table.available = 1;
    tables->next = malloc(sizeof(Tables));
    tables->next->table.tableNo = 2;
    tables->next->table.capacity = 2;
    tables->next->table.available = 1;
    tables->next->next = NULL;
    return tables;
}

void testCreateOrder_ValidData() {
    printf("Running Test Case 1: Creating a New Order with Valid Data\n");

    // Test input
    char name[] = "John Doe";
    char phone[] = "1234567890";
    int people = 4;
    long int orderID = 0;
    Tables *tables = initializeTables();
    CurrentOrders *currentOrders = NULL;
    OrderHistory *orderHistory = NULL;

    // Call function
    currentOrders = createOrder(name, phone, people, currentOrders, orderHistory, &orderID, tables);

    // Output results
    if (orderID == 1) {
        printf("Order ID is correct: %ld\n", orderID);
    } else {
        printf("Failed to assign correct Order ID. Got: %ld\n", orderID);
    }

    if (currentOrders != NULL && currentOrders->order.people == 4) {
        printf("Order created successfully with 4 people.\n");
    } else {
        printf("Failed to create order with 4 people.\n");
    }

    if (currentOrders != NULL && currentOrders->order.tableNo == 1) {
        printf("Table No. 1 successfully reserved for the order.\n");
    } else {
        printf("Table reservation failed or incorrect table number.\n");
    }

    if (tables->table.available == 0) {
        printf("Table No. 1 marked as unavailable.\n");
    } else {
        printf("Table No. 1 is still available, which is incorrect.\n");
    }

    printf("Test Case 1 Finished!\n\n");
}

void testCreateOrder_InvalidName() {
    printf("Running Test Case 2: Creating an Order with Invalid Customer Name (Empty String)\n");

    // Test input
    char name[] = ""; // Empty name
    char phone[] = "1234567890";
    int people = 2;
    long int orderID = 0;
    Tables *tables = initializeTables();
    CurrentOrders *currentOrders = NULL;
    OrderHistory *orderHistory = NULL;

    // Call function
    currentOrders = createOrder(name, phone, people, currentOrders, orderHistory, &orderID, tables);

    // Output results
    if (currentOrders == NULL) {
        printf("Correctly handled invalid name. No order created.\n");
    } else {
        printf("Order created with invalid name, which is incorrect.\n");
    }

    printf("Test Case 2 Finished!\n\n");
}

void testMakeOrder_AddItem() {
    printf("Running Test Case 3: Adding Items to an Existing Order\n");

    // Test input
    long long int itemID = 101;
    long int orderID = 1;
    CurrentOrders *currentOrders = malloc(sizeof(CurrentOrders));
    currentOrders->order.orderID = 1;
    currentOrders->order.people = 4;
    currentOrders->order.itemIDs[0] = 0; // First slot is empty
    currentOrders->next = NULL;

    // Call function
    currentOrders = makeOrder(itemID, currentOrders, orderID);

    // Output results
    if (currentOrders != NULL && currentOrders->order.itemIDs[0] == 101) {
        printf("Item ID 101 successfully added to the order.\n");
    } else {
        printf("Failed to add item ID 101 to the order.\n");
    }

    printf("Test Case 3 Finished!\n\n");
}

int main() {
    // Running the test cases
    testCreateOrder_ValidData();
    testCreateOrder_InvalidName();
    testMakeOrder_AddItem();

    printf("Selected Test Cases Finished!\n");
    return 0;
}*/
