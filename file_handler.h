#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "linked_list.h"

Menu* loadMenu(void);
void updateMenu(Menu* menu);
// menu.csv format -> Item_ID,Name,Price,Allergens(separated by spaces),

Tables* loadTables(void);
void updateTables(Tables*);
// tables.csv format -> Table_No,Capacity,Available,

CurrentOrders* loadCurrentOrders(void);
void updateCurrentOrders(CurrentOrders* currentOrders);
// current.csv format -> orderID,name,phone,people,tableNo,OrderTime(HH:MM)(24-hr format),OrderDate(DD:MM:YY),amount,itemIDs(separated by spaces)

OrderHistory* loadOrderHistory(void);
void updateOrderHistory(OrderHistory* orderHistory);
// history.csv format -> orderID,name,phone,people,tableNo,OrderTime(HH:MM)(24-hr format),OrderDate(DD:MM:YY),amount,itemIDs(separated by spaces)

void logAction(const char* fileName, const char* functionCalled);
// actions.log format -> <filename.extension> -> <function called> @ Time(HH:MM)(24-hr format) & Date(DD:MM:YY),
void logAppAction(const char* caller, const char* action);
// appActions.log format -> <callerName> -> <action performed> @ Time(HH:MM)(24-hr format) & Date(DD:MM:YY)

// NOTE: Item IDs will be stored as: ,101 102 103 000 000 (\n)

#endif
