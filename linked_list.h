#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// ********************************************************
typedef struct Item {

    long long int itemID;
    char name[100];
    float price;
    char allergens[1024];

} Item;

typedef struct Menu {

    Item item;
    struct Menu* next;

} Menu;

Menu* newItem(Item* item);
Menu* addItem(Menu* item, Menu* menu);
Menu* removeItem(long long int itemID, Menu* menu);
void deleteMenu(Menu* menu);
int lenMenu(Menu* menu);
// *********************************************************

// *********************************************************
typedef struct Table {

    long int tableNo;
    long int capacity;
    int available;

} Table;

typedef struct Tables {

    Table table;
    struct Tables* next;

} Tables;

Tables* newTable(Table* table);
Tables* addTable(Tables* table, Tables* tables);
Tables* removeTable(long int tableNo, Tables* tables);
void deleteTables(Tables* tables);
int lenTables(Tables* tables);
// ***********************************************************

// ***********************************************************
typedef struct Order {

    long int orderID;
    char name[100];
    char phone[11];
    int people;
    long int tableNo;
    long long int itemIDs[100];
    char orderTime[6]; // HH:MM (24-hr format)
    char orderDate[9]; // DD:MM:YY
    float amount;

} Order;

typedef struct CurrentOrders {

    Order order;
    struct CurrentOrders* next;

} CurrentOrders;

typedef struct OrderHistory {

    Order order;
    struct OrderHistory* next;

} OrderHistory;

CurrentOrders* newOrder(Order* order);
CurrentOrders* addOrder(CurrentOrders* currentOrder, CurrentOrders* currentOrders);
CurrentOrders* removeOrder(long int orderID, CurrentOrders* currentOrders);
void deleteCurrentOrders(CurrentOrders* currentOrders);
int lenCurrentOrders(CurrentOrders* currentOrders);

OrderHistory* newEntry(Order* order);
OrderHistory* addEntry(OrderHistory* currentEntry, OrderHistory* orderHistory);
void deleteOrderHistory(OrderHistory* orderHistory);
int lenOrderHistory(OrderHistory* orderHistory); 
// ************************************************************

// ************************************************************

char* getTime(void);
char* getDate(void);

// USE FOR DEBUGGING PURPOSES ONLY
// ===============================

void formatMenu(Menu* menu);
void formatTables(Tables* tables);
void formatCurrentOrders(CurrentOrders* currentOrders);
void formatOrderHistory(OrderHistory* orderHistory);

void testMenu(void);
void testTables(void);
void testCurrentOrders(void);
void testOrderHistory(void);

#endif
  
