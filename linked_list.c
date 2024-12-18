#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <time.h>
#include "linked_list.h"
#include "file_handler.h"

#define ALLOC_FAILED -1
#define EMPTY_LIST -4

#define STR_ALLOC_FAILED fprintf(stderr, "\a\nFATAL ERROR! MEMORY ALLOCATION FAILED!\n\n")
#define STR_EMPTY_LIST fprintf(stderr, "\a\nFATAL ERROR! EMPTY LIST!\n\n")
#define STR_INVALID_INDEX fprintf(stderr, "\a\nFATAL ERROR! INVALID INDEX!\n\n")

#undef malloc

static void* alloc(size_t size) {

    // logAction("linked_list.c", "alloc");

    void* mem = malloc(size);
    if (!mem) {

        STR_ALLOC_FAILED;
        exit(ALLOC_FAILED);
    }

    return mem;
}

void formatLine(void) {

    puts("=====================================");
}

char* getTime(void) {

    time_t t = time(NULL);
    struct tm* ctime = localtime(&t);

    static char strtime[6];
    snprintf(strtime, sizeof(strtime) * 10, "%02d:%02d", ctime->tm_hour, ctime->tm_min);

    // logAction("linked_list.c", "getTime");
    return strtime;
}

char* getDate(void) {

    time_t t = time(NULL);
    struct tm* ctime = localtime(&t);

    static char strdate[9];
    snprintf(strdate, sizeof(strdate) * 10, "%02d-%02d-%02d", ctime->tm_mday, ctime->tm_mon + 1, ctime->tm_year % 100);

    // logAction("linked_list.c", "getDate");
    return strdate;
}



// ************************************************

Menu* newItem(Item* item) {

    logAction("linked_list.c", "newItem");

    Menu* node = (Menu*)alloc(sizeof(Menu));

    node->item.itemID = item->itemID;
    strncpy(node->item.name, item->name, sizeof(node->item.name));
    node->item.price = item->price;
    strncpy(node->item.allergens, item->allergens, sizeof(node->item.allergens));

    node->next = NULL;
    return node;
}

Menu* addItem(Menu* item, Menu* menu) {

    logAction("linked_list.c", "addItem");

    if (!menu)
        return item;

    Menu* temp = menu;
    while (temp->next)
        temp = temp->next;

    temp->next = item;
    return menu;
}

Menu* removeItem(long long int itemID, Menu* menu) {

    logAction("linked_list.c", "removeItem");

    if (!menu) {

        STR_EMPTY_LIST;
        exit(EMPTY_LIST);
    }

    if (menu->item.itemID%10000 == itemID) {

        Menu* itemToRemove = menu;
        menu = menu->next;

        free(itemToRemove);
        return menu;
    }

    Menu* temp = menu;
    while (temp->next && temp->next->item.itemID%10000 != itemID)
        temp = temp->next;

    if (!temp->next) {

        STR_INVALID_INDEX;
        return menu;
    }

    Menu* itemToRemove = temp->next;
    temp->next = temp->next->next;
    
    free(itemToRemove);
    return menu;
}

void deleteMenu(Menu* menu) {

    logAction("linked_list.c", "deleteMenu");

    if (!menu)
        return;

    Menu* temp = menu;
    while (temp) {

        Menu* itemToDelete = temp;
        temp = temp->next;
        free(itemToDelete);
    }

    return;
}

int lenMenu(Menu* menu) {

    logAction("linked_list.c", "lenMenu");

    Menu* temp = menu;
    int len = 0;
    while (temp) {

        len++;
        temp = temp->next;
    }

    return len;
}

// ********************************************


void formatMenu(Menu* menu) {

    logAction("linked_list.c", "formatMenu");

    formatLine();

    if (!menu) {

        STR_EMPTY_LIST;
        return;
    }

    Menu* temp = menu;
    while (temp) {

        printf("Item ID: %lld, Name: %s, Price: %.2f, Allergens: %s\n", temp->item.itemID, temp->item.name, temp->item.price, temp->item.allergens);
        
        temp = temp->next;
    }

    formatLine();

    return;
}

void testMenu(void) {

    logAction("linked_list.c", "testMenu");

    Item a = {1, "a", 1, "none"}, b = {2, "b", 2, "none"}, c = {3, "c", 3, "none"};
    
    Menu* menu = NULL;
    formatMenu(menu);

    menu = addItem(newItem(&a), menu);
    formatMenu(menu);

    menu = addItem(newItem(&b), menu);
    formatMenu(menu);

    menu = addItem(newItem(&c), menu);
    formatMenu(menu);

    menu = removeItem(2, menu);
    formatMenu(menu);

    menu = removeItem(3, menu);
    formatMenu(menu);

    menu = removeItem(3, menu);
    formatMenu(menu);

    menu = removeItem(1, menu);
    formatMenu(menu);

    deleteMenu(menu);

    return;
}

// ========================================================

Tables* newTable(Table* table) {

    // logAction("linked_list.c", "newTable");

    Tables* node = (Tables*)alloc(sizeof(Tables));

    node->table.tableNo = table->tableNo;
    node->table.capacity = table->capacity;
    node->table.available = table->available;

    node->next = NULL;

    return node;
}

Tables* addTable(Tables* table, Tables* tables) {

    // logAction("linked_list.c", "addTable");

    if (!tables)
        return table;

    Tables* temp = tables;
    while (temp->next)
        temp = temp->next;

    temp->next = table;
    return tables;
}

Tables* removeTable(long int tableNo, Tables* tables) {

    // logAction("linked_list.c", "removeTable");

    if (!tables) {

        STR_EMPTY_LIST;
        exit(EMPTY_LIST);
    }

    if (tables->table.tableNo == tableNo) {

        Tables* tableToRemove = tables;
        tables = tables->next;

        free(tableToRemove);
        return tables;
    }

    Tables* temp = tables;
    while (temp->next && temp->next->table.tableNo != tableNo)
        temp = temp->next;

    if (!temp->next) {

        STR_INVALID_INDEX;
        return tables;
    }

    Tables* tableToRemove = temp->next;
    temp->next = temp->next->next;

    free(tableToRemove);
    return tables;
}

void deleteTables(Tables* tables) {

    // logAction("linked_list.c", "deleteTables");

    if (!tables)
        return;

    Tables* temp = tables;
    while (temp) {

        Tables* tableToDelete = temp;
        temp = temp->next;
        free(tableToDelete);
    }

    return;
}

int lenTables(Tables* tables) {

    // logAction("linked_list.c", "lenTables");

    Tables* temp = tables;
    int len = 0;
    while (temp) {

        len++;
        temp = temp->next;
    }

    return len;
}

// ********************************************

void formatTables(Tables* tables) {

    // logAction("linked_list.c", "formatTables");

    formatLine();

    if (!tables) {

        STR_EMPTY_LIST;
        return;
    }

    Tables* temp = tables;
    while (temp) {

        printf("Table No.: %ld, Capacity: %ld, Available: %d\n", temp->table.tableNo, temp->table.capacity, temp->table.available);

        temp = temp->next;
    }

    formatLine();
}



void testTables(void) {

    // logAction("linked_list.c", "testTables");

    Table a = {1,1,0}, b = {2,2,1}, c = {3,3,0};

    Tables* tables = NULL;
    formatTables(tables);

    tables = addTable(newTable(&a), tables);
    formatTables(tables);

    tables = addTable(newTable(&b), tables);
    formatTables(tables);

    tables = addTable(newTable(&c), tables);
    formatTables(tables);

    tables = removeTable(1, tables);
    formatTables(tables);

    tables = removeTable(3, tables);
    formatTables(tables);

    tables = removeTable(4, tables);
    formatTables(tables);

    tables = addTable(newTable(&a), tables);
    tables = addTable(newTable(&c), tables);
    formatTables(tables);

    tables = removeTable(1, tables);
    formatTables(tables);

    deleteTables(tables);

    return;
}

// ********************************************

CurrentOrders* newOrder(Order* order) {

    logAction("linked_list.c", "newOrder");

    CurrentOrders* node = (CurrentOrders*)alloc(sizeof(CurrentOrders));

    node->order.orderID = order->orderID;
    strncpy(node->order.name, order->name, sizeof(order->name));
    strncpy(node->order.phone, order->phone, sizeof(order->phone));
    node->order.people = order->people;
    node->order.tableNo = order->tableNo;

    for (int i = 0; i < sizeof(order->itemIDs) / sizeof(order->itemIDs[0]); i++)
        node->order.itemIDs[i] = 0;
    
    for (int i = 0; i < sizeof(order->itemIDs) / sizeof(order->itemIDs[0]); i++)
        node->order.itemIDs[i] = order->itemIDs[i];

    strncpy(node->order.orderTime, order->orderTime, sizeof(order->orderTime));
    strncpy(node->order.orderDate, order->orderDate, sizeof(order->orderDate));
    node->order.amount = 0;

    node->next = NULL;

    return node;
}

CurrentOrders* addOrder(CurrentOrders* currentOrder, CurrentOrders* currentOrders) {

    logAction("linked_list.c", "addOrder");

    if (!currentOrders)
        return currentOrder;

    CurrentOrders* temp = currentOrders;
    while (temp->next)
        temp = temp->next;

    temp->next = currentOrder;
    return currentOrders;
}

CurrentOrders* removeOrder(long int orderID, CurrentOrders* currentOrders) {

    logAction("linked_list.c", "removeOrder");

    if (!currentOrders) {

        STR_EMPTY_LIST;
        exit(EMPTY_LIST);
    }

    if (currentOrders->order.orderID == orderID) {

        CurrentOrders* orderToRemove = currentOrders;
        currentOrders = currentOrders->next;

        free(orderToRemove);
        return currentOrders;
    }

    CurrentOrders* temp = currentOrders;
    while (temp->next && temp->next->order.orderID != orderID)
        temp = temp->next;

    if (!temp->next) {

        STR_INVALID_INDEX;
        return currentOrders;
    }

    CurrentOrders* orderToRemove = temp->next;
    temp->next = temp->next->next;

    free(orderToRemove);
    return currentOrders;
}

void deleteCurrentOrders(CurrentOrders* currentOrders) {

    logAction("linked_list.c", "deleteCurrentOrders");

    if (!currentOrders)
        return;

    CurrentOrders* temp = currentOrders;
    while (temp) {

        CurrentOrders* orderToDelete = temp;
        temp = temp->next;
        free(orderToDelete);
    }

    return;
}

int lenCurrentOrders(CurrentOrders* currentOrders) {

    logAction("linked_list.c", "lenCurrentOrders");

    CurrentOrders* temp = currentOrders;
    int len = 0;
    while (temp) {

        len++;
        temp = temp->next;
    }

    return len;
}

// ********************************************

void formatCurrentOrders(CurrentOrders* currentOrders) {

    logAction("linked_list.c", "formatCurrentOrders");

    formatLine();

    if (!currentOrders) {

        STR_EMPTY_LIST;
        return;
    }

    CurrentOrders* temp = currentOrders;
    while (temp) {

        printf("Order ID: %ld, Name: %s, Ph.No.: %s, People: %d, Table No.: %ld, Time: %s, Date: %s\n", temp->order.orderID, temp->order.name, temp->order.phone, temp->order.people, temp->order.tableNo, temp->order.orderTime, temp->order.orderDate);
        printf("Item IDs: ");
        for (int i = 0; i < lenCurrentOrders(currentOrders) && temp->order.itemIDs[i]; i++) {
            
            printf("%lld ", temp->order.itemIDs[i]);
        }
        printf("\nAmount: %.2f\n", temp->order.amount);

        temp = temp->next;

        formatLine();
    }

    formatLine();

    return;
}

void testCurrentOrders(void) {

    logAction("linked_list.c", "testCurrentOrders");

    Order a = {1, "a", "1", 1, 1, {1,2,3}, .amount = 0};
    strncpy(a.orderTime, getTime(), sizeof(a.orderTime));
    strncpy(a.orderDate, getDate(), sizeof(a.orderDate));

    Order b = {2, "b", "2", 2, 2, {4,5,6}, .amount = 0};
    strncpy(b.orderTime, getTime(), sizeof(b.orderTime));
    strncpy(b.orderDate, getDate(), sizeof(b.orderDate));

    Order c = {3, "c", "3", 3, 3, {7,8,9}, .amount = 0};
    strncpy(c.orderTime, getTime(), sizeof(c.orderTime));
    strncpy(c.orderDate, getDate(), sizeof(c.orderDate));

    CurrentOrders* co = NULL;
    formatCurrentOrders(co);

    co = addOrder(newOrder(&a), co);
    formatCurrentOrders(co);

    co = addOrder(newOrder(&b), co);
    formatCurrentOrders(co);

    co = addOrder(newOrder(&c), co);
    formatCurrentOrders(co);

    co = removeOrder(1, co);
    formatCurrentOrders(co);

    co = removeOrder(3, co);
    formatCurrentOrders(co);

    co = removeOrder(5, co);
    formatCurrentOrders(co);

    co = removeOrder(2, co);
    formatCurrentOrders(co);

    co = addOrder(newOrder(&a), co);
    co = addOrder(newOrder(&b), co);
    co = addOrder(newOrder(&c), co);
    co = removeOrder(2, co);
    formatCurrentOrders(co);

    deleteCurrentOrders(co);

    return;    
}

// ***********************************************

OrderHistory* newEntry(Order* order) {

    logAction("linked_list.c", "newEntry");

    OrderHistory* node = (OrderHistory*)alloc(sizeof(OrderHistory));

    node->order.orderID = order->orderID;
    strncpy(node->order.name, order->name, sizeof(order->name));
    strncpy(node->order.phone, order->phone, sizeof(order->phone));
    node->order.people = order->people;
    node->order.tableNo = order->tableNo;
    
    for (int i = 0; i < sizeof(order->itemIDs) / sizeof(order->itemIDs[0]); i++)
        node->order.itemIDs[i] = order->itemIDs[i];

    strncpy(node->order.orderTime, order->orderTime, sizeof(order->orderTime));
    strncpy(node->order.orderDate, order->orderDate, sizeof(order->orderDate));
    node->order.amount = order->amount;

    node->next = NULL;

    return node;
}

OrderHistory* addEntry(OrderHistory* entry, OrderHistory* orderHistory) {

    logAction("linked_list.c", "addEntry");

    if (!orderHistory)
        return entry;

    OrderHistory* temp = orderHistory;
    while (temp->next)
        temp = temp->next;

    temp->next = entry;
    return orderHistory;
}

void deleteOrderHistory(OrderHistory* orderHistory) {

    logAction("linked_list.c", "deleteOrderHistory");

    if (!orderHistory)
        return;

    OrderHistory* temp = orderHistory;
    while (temp) {

        OrderHistory* entryToDelete = temp;
        temp = temp->next;
        free(entryToDelete);
    }

    return;
}

int lenOrderHistory(OrderHistory* orderHistory) {

    logAction("linked_list.c", "lenOrderHistory");

    OrderHistory* temp = orderHistory;
    int len = 0;
    while (temp) {

        len++;
        temp = temp->next;
    }

    return len;
}

// ***********************************************

void formatOrderHistory(OrderHistory* orderHistory) {

    logAction("linked_list.c", "formatOrderHistory");

    formatLine();

    if (!orderHistory) {

        STR_EMPTY_LIST;
        return;
    }

    OrderHistory* temp = orderHistory;
    while (temp) {

        printf("Order ID: %ld, Name: %s, Ph.No.: %s, People: %d, Table No.: %ld, Time: %s, Date: %s\n", temp->order.orderID, temp->order.name, temp->order.phone, temp->order.people, temp->order.tableNo, temp->order.orderTime, temp->order.orderDate);
        printf("Item IDs: ");
        for (int i = 0; i < lenOrderHistory(orderHistory) && temp->order.itemIDs[i]; i++) {
            
            printf("%lld ", temp->order.itemIDs[i]);
        }
        printf("\nAmount: %.2f\n", temp->order.amount);

        temp = temp->next;

        formatLine();
    }

    formatLine();

    return;
}

void testOrderHistory(void) {

    logAction("linked_list.c", "testOrderHistory");

    Order a = {1, "a", "1", 1, 1, {1,2,3}, .amount = 0};
    strncpy(a.orderTime, getTime(), sizeof(a.orderTime));
    strncpy(a.orderDate, getDate(), sizeof(a.orderDate));

    Order b = {2, "b", "2", 2, 2, {4,5,6}, .amount = 0};
    strncpy(b.orderTime, getTime(), sizeof(b.orderTime));
    strncpy(b.orderDate, getDate(), sizeof(b.orderDate));

    Order c = {3, "c", "3", 3, 3, {7,8,9}, .amount = 0};
    strncpy(c.orderTime, getTime(), sizeof(c.orderTime));
    strncpy(c.orderDate, getDate(), sizeof(c.orderDate));

    OrderHistory* oh = NULL;
    formatOrderHistory(oh);

    oh = addEntry(newEntry(&a), oh);
    formatOrderHistory(oh);

    oh = addEntry(newEntry(&b), oh);
    formatOrderHistory(oh);

    oh = addEntry(newEntry(&c), oh);
    formatOrderHistory(oh);

    deleteOrderHistory(oh);

    return;    
}
