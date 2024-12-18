#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "linked_list.h"
#include "data_handler.h"
#include "file_handler.h"


int compdate(char* d1,char* d2);  //compares two dates and returns 0 if d1==d2, -1 if d1<d2 and 1 if d1>d2 when d1 and d2 are in format DD:MM:YY
int diffdate(char* d1,char* d2); //compares two dates and return the number of days between d1 and d2 when d1 and d2 are in the format DD:MM:YY, only works when d2>d1
void toLower(char* str);

Menu* searchItemNames(char* name, Menu* menu){

  logAction("data_handler.c", "searchItemNames");
  logAppAction("Customer", "Filtered by item name");

  struct Menu* outlist = NULL;
  struct Menu* iter = menu;
  struct Item item;

  if(strcmp(name," ")==0){
    return menu;
  }
  toLower(name);
  while(iter != NULL)
  {
    item = iter->item;
    char tempstr[100];
    strcpy(tempstr,item.name);
    toLower(tempstr);

    char* check = strstr(tempstr,name);
    if(check != NULL)
    {
      struct Menu* newlink = newItem(&item);
      outlist = addItem(newlink,outlist);
    }
    iter = iter->next;
  }

  if(outlist == NULL)
  {
    struct Item item = {0,"No such item found",0,""};  
    struct Menu* newlink = newItem(&item);
    outlist = addItem(newlink,outlist);
  } 
  return outlist;
}

Menu* searchVegEggNon(int code, Menu* menu){

  logAction("data_handler.c", "searchVegEggNon");
  logAppAction("Customer", "Filtered by Veg, Egg or Non-Veg options");

  struct Menu* outlist = NULL;
  struct Menu* iter = menu;
  struct Item item;
  while(iter != NULL)
  {
    item = iter->item;
    int veg=(item.itemID/10000)%10;
    if(veg == code)
    {
      struct Menu* newlink = newItem(&item);
      outlist = addItem(newlink,outlist);
    }
    iter = iter->next;
  }
  
  if(outlist == NULL)
  {
    struct Item item = {0,"No such item found",0,""};  
    struct Menu* newlink = newItem(&item);
    outlist = addItem(newlink,outlist);
  }

  return outlist;
}

Menu* searchCourse(int code, Menu* menu){

  logAction("data_handler.c", "searchCourse");
  logAppAction("Customer", "Filtered by course");

  struct Menu* outlist = NULL;
  struct Menu* iter = menu;
  struct Item item;
  while(iter != NULL)
  {
    item = iter->item;
    int course=(item.itemID/1000000)%10;
    if(course == code)
    {
      struct Menu* newlink = newItem(&item);
      outlist = addItem(newlink,outlist);
    }
    iter = iter->next;
  }
  
  if(outlist == NULL)
  {
    struct Item item = {0,"No such item found",0,""};  
    struct Menu* newlink = newItem(&item);
    outlist = addItem(newlink,outlist);
  }

  return outlist;
}

Menu* searchItemPrice(float min, float max, Menu* menu){

  logAction("data_handler.c", "searchItemPrice");
  logAppAction("Customer", "Filtered by price range");

  struct Menu* outlist = NULL;
  struct Menu* iter = menu;
  struct Item item;
  while(iter != NULL)
  {
    item = iter->item;
    float price = item.price;
    if(min<=price && max>=price)
    {
      struct Menu* newlink = newItem(&item);
      outlist = addItem(newlink,outlist);
    }
    iter = iter->next;
  }
  
  if(outlist == NULL)
  {
    struct Item item = {0,"No such item found",0,""};  
    struct Menu* newlink = newItem(&item);
    outlist = addItem(newlink,outlist);
  }

  return outlist;
}



// Menu* searchAllergens(char* allergen, Menu* menu){
//   struct Menu* outlist = NULL;
//   struct Menu* iter = menu;
//   struct Item item;
//   while(iter != NULL)
//   {
//     item = iter->item;
//     char* flag = strstr(item.allergens,allergen);
//     if(flag == NULL)
//     {
//       struct Menu* newlink = newItem(&item);
//       outlist = addItem(newlink,outlist);
//     }
//     iter = iter->next;
//   }
//   return outlist;
// }




Menu* searchAllergens(char* allergen, Menu* menu){

  logAction("data_handler.c", "searchAllergens");
  logAppAction("Customer", "Filtered by allergens");

  struct Menu* outlist = NULL;
  struct Menu* iter = menu;
  struct Item item;
  toLower(allergen);
  while(iter != NULL)
  {
    item = iter->item;
    char tempstr[100];
    strcpy(tempstr,item.allergens);
    toLower(tempstr);

    char* flag = strstr(tempstr,allergen);
    if(flag == NULL)
    {
      struct Menu* newlink = newItem(&item);
      outlist = addItem(newlink,outlist);
    }
    iter = iter->next;
  }
  
  if(outlist == NULL)
  {
    struct Item item = {0,"No such item found",0,""};  
    struct Menu* newlink = newItem(&item);
    outlist = addItem(newlink,outlist);
  }

  return outlist;
}



// SALES ANALYSIS


float totalRevenue(char* startDate, char* endDate, OrderHistory* orderHistory, int* totalOrders) {

    logAction("data_handler.c", "totalRevenue");
    logAppAction("Admin", "Analysed total revenue");

    float totalRevenue = 0.0;
    *totalOrders = 0;

    if (startDate == NULL || endDate == NULL || orderHistory == NULL) {
        printf("Invalid input to totalRevenue function.\n");
        return 0.0;
    }

    struct OrderHistory* iter = orderHistory;

    while (iter != NULL) {
        struct Order order = iter->order;

        int compareStart = compdate(startDate, order.orderDate);
        int compareEnd = compdate(order.orderDate, endDate);

        if (compareStart <= 0 && compareEnd <= 0) {
            totalRevenue += order.amount;
            (*totalOrders)++;
        }

        iter = iter->next; 
    }

    return totalRevenue;
}


float averageRevenueInLast30Days(OrderHistory* orderHistory, int* totalOrders ){

  logAction("data_handler.c", "averageRevenueInLast30Days");
  logAppAction("Admin", "Analysed average revenue in the last 30 days");

  float rev = 0;
  char currentdate[9] = "";
  strcpy(currentdate, getDate());
  *totalOrders = 0;
  struct OrderHistory* iter = orderHistory;
  struct Order order;
  
  while(iter != NULL)
  {
    order = iter->order;
    int daydiff = diffdate(order.orderDate,currentdate);
    if(daydiff<30 && daydiff>=0){
     rev += order.amount;
     (*totalOrders)++;
    }
    iter = iter->next;
  }
  return rev/30;
}


void past30DaysData(OrderHistory* orderHistory, int data[30]){

  logAction("data_handler.c", "past30DaysData");
  logAppAction("Admin", "Analysed sales in the last 30 days");

  char currentdate[9]= "";
 
  strcpy(currentdate, getDate());
  struct OrderHistory* iter = orderHistory;
  struct Order order;
  
  while(1==1)
  {
    
    order = iter->order;
    int daydiff = diffdate(order.orderDate,currentdate);
    int i = 29 - daydiff;
    if(daydiff<30 && daydiff>=0){
     data[i] += order.amount;
    }
    if(iter->next==NULL){
      break;
    }
    iter = iter->next;
  }

  


}


int compdate( char* d1,  char* d2) {
    struct tm tm1 = {0}, tm2 = {0};
    sscanf(d1, "%02d-%02d-%02d", &tm1.tm_mday, &tm1.tm_mon, &tm1.tm_year);
    sscanf(d2, "%02d-%02d-%02d", &tm2.tm_mday, &tm2.tm_mon, &tm2.tm_year);

    tm1.tm_mon -= 1;
    tm2.tm_mon -= 1;
    tm1.tm_year += 100;
    tm2.tm_year += 100;

    time_t time1 = mktime(&tm1);
    time_t time2 = mktime(&tm2);

    return (time1 < time2) ? -1 : (time1 > time2 ? 1 : 0);
}


int diffdate(char *d1,char *d2) {
    struct tm tm1 = {0}, tm2 = {0};
    time_t time1, time2;
    
    sscanf(d1, "%02d-%02d-%02d", &tm1.tm_mday, &tm1.tm_mon, &tm1.tm_year);
    sscanf(d2, "%02d-%02d-%02d", &tm2.tm_mday, &tm2.tm_mon, &tm2.tm_year);
    
    tm1.tm_mon -= 1;  
    tm2.tm_mon -= 1;
    tm1.tm_year += 100;  
    tm2.tm_year += 100;

    time1 = mktime(&tm1);
    time2 = mktime(&tm2);

    double difference = difftime(time2, time1) / (60 * 60 * 24);
    
    return (int)difference;
}






float todaysSalesData(OrderHistory* orderHistory, int* totalOrders) {

    logAction("data_handler.c", "todaysSalesData");
    logAppAction("Admin", "Analysed todays' sales");

    char currentdate[9] = "";
    strcpy(currentdate, getDate());  
    
    float totalRevenue = 0.0;
    *totalOrders = 0;

    struct OrderHistory* iter = orderHistory;

    while (iter != NULL) {
        struct Order order = iter->order;

        
        if (strcmp(order.orderDate, currentdate) == 0) {
            totalRevenue += order.amount;
            (*totalOrders)++;
        }

        iter = iter->next; 
    }

    return totalRevenue;
}

void toLower(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}
