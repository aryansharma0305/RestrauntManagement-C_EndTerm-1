#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "linked_list.h"
#include "file_handler.h"

CurrentOrders* createOrder(char name[100], char phone[11],int people, CurrentOrders* currentOrders,OrderHistory* orderHistory, long long int* orderID, Tables* tables);
// creates a new node in the CurrentOrders linked list, with name, phone, creates and modifies an order ID, sets time and date, 
// and pushes the new order to the CurrentOrders linked list and returns the head of the new list

Tables* reserveTable(long long int orderID, int people, Tables* tables, CurrentOrders* currentOrders, long int* futureTableNo);
// searches through Tables linked list, finds the first table with capacity >= people, sets 'available' to 0, returns head of Tables linked list,
// sets table number to a particular order ID in CurrentOrders Linked List and modifies futureTableNo

CurrentOrders* makeOrder(long long int itemID, CurrentOrders* currentOrders, long long int orderID);
// searches through the CurrentOrders linked list, finds the order ID, and updates the itemIDs[] array

#endif
