#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "file_handler.h"
#include "linked_list.h"

#define ALLOC_FAILED -1
#define FILE_OPEN_FAILED -3

#define STR_ALLOC_FAILED fprintf(stderr, "\a\nFATAL ERROR! MEMORY ALLOCATION FAILED!\n\n")
#define STR_FILE_OPEN_FAILED fprintf(stderr, "\a\nFATAL ERROR! FILE NOT FOUND!\n\n")

#undef malloc
#undef fopen

static void* alloc(size_t size) {

    // logAction("file_handler.c", "alloc");

    void* mem = malloc(size);
    if (!mem) {

        STR_ALLOC_FAILED;
        exit(ALLOC_FAILED);
    }

    return mem;
}

static FILE* open(const char* fileName, const char* mode) {

    //logAction("file_handler.c", "open");

    FILE* fptr = fopen(fileName, mode);
    if (!fptr) {

        STR_FILE_OPEN_FAILED;
        exit(FILE_OPEN_FAILED);
    }

    return fptr;
}

void logAction(const char* fileName, const char* functionCalled) {

    FILE* fptr = open("actions.log", "a");

    fprintf(fptr, "%s -> %s() @ %s & %s\n", fileName, functionCalled, getTime(), getDate());

    fclose(fptr);
    fptr = NULL;
    return;
}

void logAppAction(const char* caller, const char* action) {

    FILE* fptr = open("appActions.log", "a");

    fprintf(fptr, "%s -> %s @ %s & %s\n", caller, action, getTime(), getDate());

    fclose(fptr);
    fptr = NULL;
    return;
}

Menu* loadMenu(void) {

    logAction("file_handler.c", "loadMenu");

    FILE* fptr = open("menu.csv", "r");
    
    Menu* menu = NULL;

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), fptr)) {

        buffer[strcspn(buffer, "\n")] = '\0';

        Item item;

        item.itemID = atoll(strtok(buffer, ","));
        strncpy(item.name, strtok(NULL, ","), sizeof(item.name));
        item.price = atof(strtok(NULL, ","));
        strncpy(item.allergens, strtok(NULL, ","), sizeof(item.allergens) - 1);

        menu = addItem(newItem(&item), menu);
    }

    fclose(fptr);
    fptr = NULL;
    return menu;
}

void updateMenu(Menu* menu) {

    logAction("file_handler.c", "updateMenu");

    if (!menu)
        return;

    FILE* fptr = open("menu.csv", "w+");
    
    Menu* temp = menu;

    while (temp) {

        fprintf(fptr, "%lld,%s,%.2f,%s,\n", temp->item.itemID, temp->item.name, temp->item.price, temp->item.allergens);

        temp = temp->next;
    }

    fclose(fptr);
    fptr = NULL;
    return;
}

Tables* loadTables(void) {

    logAction("file_handler.c", "loadTables");

    FILE* fptr = open("tables.csv", "r");

    Tables* tables = NULL;

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), fptr)) {

        buffer[strcspn(buffer, "\n")] = '\0';

        Table table;

        table.tableNo = atol(strtok(buffer, ","));
        table.capacity = atol(strtok(NULL, ","));
        table.available = atoi(strtok(NULL, ","));

        tables = addTable(newTable(&table), tables);
    }

    fclose(fptr);
    fptr = NULL;
    return tables;
}

void updateTables(Tables* tables) {

    logAction("file_handler.c", "updateTables");

    if (!tables)
        return;

    FILE* fptr = open("tables.csv", "w+");

    Tables* temp = tables;

    while (temp) {

        fprintf(fptr, "%ld,%ld,%d,\n", temp->table.tableNo, temp->table.capacity, temp->table.available);

        temp = temp->next;
    }

    fclose(fptr);
    fptr = NULL;
    return;
}

CurrentOrders* loadCurrentOrders(void) {

    logAction("file_handler.c", "loadCurrentOrders");

    FILE* fptr = open("current.csv", "r");

    CurrentOrders* currentOrders = NULL;

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), fptr)) {

        buffer[strcspn(buffer, "\n")] = '\0';

        Order order;

        order.orderID = atol(strtok(buffer, ","));
        strncpy(order.name, strtok(NULL, ","), sizeof(order.name));
        strncpy(order.phone, strtok(NULL, ","), sizeof(order.phone));
        order.people = atoi(strtok(NULL, ","));
        order.tableNo = atol(strtok(NULL, ","));
        strncpy(order.orderTime, strtok(NULL, ","), sizeof(order.orderTime));
        strncpy(order.orderDate, strtok(NULL, ","), sizeof(order.orderDate));
        order.amount = atof(strtok(NULL, ","));
      
        for (int i = 0; i < sizeof(order.itemIDs) / sizeof(order.itemIDs[0]); i++)
            order.itemIDs[i] = 0;

        char* IDs = strtok(NULL, ",");
        if (IDs) {
            char* token = strtok(IDs, " ");
            int i = 0;
            while (token && i < (int)(sizeof(order.itemIDs) / sizeof(order.itemIDs[0]))) {
                order.itemIDs[i++] = atoll(token);
                token = strtok(NULL, " ");
            }
        }

        currentOrders = addOrder(newOrder(&order), currentOrders);
    }

    fclose(fptr);
    fptr = NULL;
    return currentOrders;
}

void updateCurrentOrders(CurrentOrders* currentOrders) {

    logAction("file_handler.c", "updateCurrentOrders");

    if (!currentOrders)
        return;

    FILE* fptr = open("current.csv","w+");

    CurrentOrders* temp = currentOrders;

    while (temp) {

        fprintf(fptr, "%ld,%s,%s,%d,%ld,%s,%s,%.2f,", temp->order.orderID, temp->order.name, temp->order.phone, temp->order.people, temp->order.tableNo, temp->order.orderTime, temp->order.orderDate, temp->order.amount);

        for (int i = 0; temp->order.itemIDs[i] && i < sizeof(temp->order.itemIDs) / sizeof(temp->order.itemIDs[0]); i++)
            fprintf(fptr, "%lld ", temp->order.itemIDs[i]);

        temp = temp->next;
        fputc('\n', fptr);
    }

    fclose(fptr);
    fptr = NULL;
    return;
}

OrderHistory* loadOrderHistory(void) {

    logAction("file_handler.c", "loadOrderHistory");

    FILE* fptr = open("history.csv", "r");

    OrderHistory* orderHistory = NULL;

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), fptr)) {

        buffer[strcspn(buffer, "\n")] = '\0';

        Order order;

        order.orderID = atol(strtok(buffer, ","));
        strncpy(order.name, strtok(NULL, ","), sizeof(order.name));
        strncpy(order.phone, strtok(NULL, ","), sizeof(order.phone));
        order.people = atoi(strtok(NULL, ","));
        order.tableNo = atol(strtok(NULL, ","));
        strncpy(order.orderTime, strtok(NULL, ","), sizeof(order.orderTime));
        strncpy(order.orderDate, strtok(NULL, ","), sizeof(order.orderDate));
        order.amount = atof(strtok(NULL, ","));
      
        for (int i = 0; i < sizeof(order.itemIDs) / sizeof(order.itemIDs[0]); i++)
            order.itemIDs[i] = 0;

        char* IDs = strtok(NULL, ",");
        if (IDs) {
            char* token = strtok(IDs, " ");
            int i = 0;
            while (token && i < (int)(sizeof(order.itemIDs) / sizeof(order.itemIDs[0]))) {
                order.itemIDs[i++] = atoll(token);
                token = strtok(NULL, " ");
            }
        }

        orderHistory = addEntry(newEntry(&order), orderHistory);
    }

    fclose(fptr);
    fptr = NULL;
    return orderHistory;
}

void updateOrderHistory(OrderHistory* orderHistory) {

    logAction("file_handler.c", "updateOrderHistory");

    if (!orderHistory)
        return;

    FILE* fptr = open("history.csv","w+");

    OrderHistory* temp = orderHistory;

    while (temp) {

        fprintf(fptr, "%ld,%s,%s,%d,%ld,%s,%s,%.2f,", temp->order.orderID, temp->order.name, temp->order.phone, temp->order.people, temp->order.tableNo, temp->order.orderTime, temp->order.orderDate, temp->order.amount);

        for (int i = 0; temp->order.itemIDs[i] && i < sizeof(temp->order.itemIDs) / sizeof(temp->order.itemIDs[0]); i++)
            fprintf(fptr, "%lld ", temp->order.itemIDs[i]);

        temp = temp->next;
        fputc('\n', fptr);
    }

    fclose(fptr);
    fptr = NULL;
    return;
}

