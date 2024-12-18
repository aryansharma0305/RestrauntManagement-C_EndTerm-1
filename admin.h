#ifndef ADMIN_H
#define ADMIN_H

#include <stddef.h>
#include <stdlib.h>
#include "linked_list.h"
#include "file_handler.h"

Tables* addNewTable(long int tableNo, long int capacity,Tables* tables);
// adds a new node to the Tables linked list and returns the head of the new list, calls updateTables()
Tables* deleteTable(long int tableNo, Tables* tables);
// deletes a node from the Tables linked list and returns the head of the new list, calls updateTables()

Menu* addNewItem(Item* item, Menu* menu);
// adds a new node to the Menu linked list and returns the head of the new list, calls updateMenu()
Menu* deleteItem(long long int itemID,Menu* menu);
// deletes a node from the Menu linked list and returns the head of the new list, calls updateMenu()
Menu* updatePrice(long long int itemID, float newPrice, Menu* menu);
// searches for item ID in the Menu linked list, changes the price and returns the head of the new list, calls updateMenu()

CurrentOrders* markAsComplete(long long int orderID, CurrentOrders* currentOrders, OrderHistory* history, Tables* tables);
// searches for order ID in the CurrentOrders linked list, shifts it to OrderHistory liked list, deletes it from CurrentOrders linked list,
// calls updateHistory() and updateCurrentOrders() and calls unreserveTable()

Tables* unreserveTable(int tableNo, Tables* tables);
// searches Tables linked list, sets 'available' to 1 and calls updateTables()

#endif  
