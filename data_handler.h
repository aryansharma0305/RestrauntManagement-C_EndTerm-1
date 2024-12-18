 // #ifndef DATA_HANDLER_H
// #define DATA_HANDLER_H

#include "linked_list.h"
#include <string.h>

Menu* searchItemNames(char* name, Menu* menu); // returns pointer to Menu struct with item details
Menu* searchVegEggNon(int code, Menu* menu);                // these three functions return pointer to head of 
Menu* searchCourse(int code, Menu* menu); 
Menu* searchItemPrice(float min, float max, Menu* menu);    // a new linked list, which is made after
Menu* searchAllergens(char* allergen, Menu* menu);          // filtering as per the given parameter

float totalRevenue(char* startDate, char* endDate, OrderHistory* orderHistory, int* totalOrders); // returns totalRevenue and changes the pointer's value of total orders
float averageRevenuePerDay(OrderHistory* orderHistory, int* totalOrders); // Returns today's sales data along with total Orders made today
float averageRevenueInLast30Days(OrderHistory* orderHistory, int* totalOrders ); // returns past 1 month sales data along with total Orders made in 30 days
void past30DaysData(OrderHistory* orderHistory, int data[30]); // makes changes in data array provided. (as it will also get reflect back to the caller). And return the total revenue
float todaysSalesData(OrderHistory* orderHistory, int* totalOrders) ;
// #endif
