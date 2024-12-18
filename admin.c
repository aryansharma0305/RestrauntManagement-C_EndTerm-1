
#include <stdio.h>
#include <stdlib.h>
#include "file_handler.h"
#include "admin.h"
#include "linked_list.h"

#define EMPTY_LIST -4
#define STR_EMPTY_LIST fprintf(stderr, "\a\nFATAL ERROR! EMPTY LIST!\n\n")
#define STR_INVALID_INDEX fprintf(stderr, "\a\nFATAL ERROR! INVALID INDEX!\n\n")

Tables* addNewTable(long int tableNo,long int capacity, Tables* tables)
    {
        logAction("admin.c","addNewTable");
        if (!tables)
            return tables;
        
        Table new_table ;
        //new tables are available for booking by default
        new_table.available=1;

        new_table.tableNo = tableNo;
        new_table.capacity=capacity;

        
        Tables* newest =(Tables *)malloc(sizeof(Tables *));
        newest = newTable(&new_table);
        
        tables=addTable(newest,tables);
        updateTables(tables);
        return tables;
    }

Tables* deleteTable(long int tableNo, Tables* tables) {

    tables=removeTable(tableNo,tables);
    updateTables(tables);
    return tables;
}

Menu* addNewItem(Item* item, Menu* menu) {
    logAction("admin.c","addNewItem");

    Menu* newDish=(Menu *)malloc(sizeof(Menu));
    newDish=newItem(item);

    menu=addItem(newDish,menu);
    updateMenu(menu);
    return menu;
}

Menu* deleteItem(long long int itemID,Menu* menu) {

    logAction("admin.c", "removeItem");

    menu=removeItem(itemID,menu);
    updateMenu(menu);
    return menu;
}

Menu* updatePrice(long long int itemID, float newPrice, Menu* menu){
    logAction("admin.c","updatePrice");

    if (!menu) {

        STR_EMPTY_LIST;
        exit(EMPTY_LIST);
    }
    //if first item matches itemID, update and return
    if (menu->item.itemID==itemID){
        menu->item.price=newPrice;
        //printf("Price Updated!");
        updateMenu(menu);
        return menu;
    }

    Menu* temp=(Menu *)malloc(sizeof(Menu));
    temp=menu;
    //traverse linked list to point to the item which match itemID
    while (temp->next && temp->next->item.itemID != itemID) //traverse as long as next node is not null && next itemID does not match
        temp = temp->next;

    temp->item.price=newPrice;
    updateMenu(menu);
    return menu;
}




// NEW


CurrentOrders* markAsComplete(long long int orderID, CurrentOrders* currentOrders, OrderHistory* history, Tables* tables) {

    logAction("admin.c", "markAsComplete");
    logAppAction("Admin", "Marked an order as complete");

    CurrentOrders *prev = NULL, *current = currentOrders;

    // Traverse the currentOrders list to find the order by orderID
    while (current != NULL) {
        if (current->order.orderID == orderID) {
            // Move the order to history
            OrderHistory *newHistoryEntry = newEntry(&(current->order));
            history = addEntry(newHistoryEntry, history);

            // Remove the order from currentOrders
            if (prev == NULL) {
                // If it's the first element
                currentOrders = current->next;
            } else {
                prev->next = current->next;
            }

            
            tables = unreserveTable(current->order.tableNo, tables);

            updateOrderHistory(history);
            updateCurrentOrders(currentOrders);

        
            free(current);
            break;
        }
        prev = current;
        current = current->next;
    }
    return currentOrders;
}

Tables* unreserveTable(int tableNo, Tables* tables) {

    logAction("admin.c", "unreserveTable");
    logAppAction("Admin", "Freed up a table for further use");

    Tables* current = tables;

    while (current != NULL) {
        if (current->table.tableNo == tableNo) {
            // Mark the table as available
            current->table.available = 1;

            updateTables(tables);

            break;
        }
        current = current->next;
    }
    return tables;
}
