
#ifndef UI_H
#define UI_H

#include "file_handler.h"
#include "data_handler.h"
#include "linked_list.h"
#include "admin.h"
#include "customer.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<unistd.h>

// Constants for menu layout
#define MAX_ITEM_NAME_WIDTH  30
#define MAX_ITEM_NO_WIDTH    8
#define MAX_SPICE_WIDTH      10
#define MAX_TYPE_WIDTH       11
#define MAX_ALLERGEN_WIDTH   25
#define MAX_PRICE_WIDTH      7

// // Constants for order history and Current Orders table
#define MAX_ORDER_ID_WIDTH 8
#define MAX_NAME_WIDTH 20
#define MAX_PHONE_WIDTH 11
#define MAX_PEOPLE_WIDTH 5
#define MAX_TABLE_NO_WIDTH 8
#define MAX_TIME_WIDTH 6
#define MAX_DATE_WIDTH 9
#define MAX_AMOUNT_WIDTH 6
#define MAX_DISHES_WIDTH 20

//Constants for passing heads of linked lists. 
#define HEADS struct Menu *menuHead, struct Tables *tablesHead, struct CurrentOrders *currentOrdersHead,struct OrderHistory *orderHistoryHead
#define HEADSFORHFILE struct Menu*, struct Tables *, struct CurrentOrders *,struct OrderHistory *
#define PASSHEADS menuHead,tablesHead,currentOrdersHead,orderHistoryHead


// Constants for Graph
#define DAYS 30
#define HEIGHT 25

// Terminal color codes ( ANSI SEQUENCES )
#define BLUE "\033[96m"
#define RED "\033[91m"
#define YELLOW "\033[33m"
#define BLINKING_YELLOW "\033[93m"
#define GREEN "\033[92m"
#define RESET "\033[0m"


// Struct for Most Bought Graph.
typedef struct ItemCount {
    long long int itemID;
    int count;
} ItemCount;




// Function Prototypes
void ClearScreen();
void logo(void);
void StartupPage(HEADSFORHFILE);
void GenerateBill(HEADS, long long orderID,int persons);
void OsSelectionPage(HEADSFORHFILE);
void LoginPage(HEADSFORHFILE);
void CustomerDetailsPage(int flag,HEADSFORHFILE);
void ManagerLoginPage(int flag,HEADSFORHFILE);
void orderDishesPage(HEADS,long long OID,int persons);
void Customerloggedinpage(HEADSFORHFILE,long long OID,int persons);
void ReserveTablePage(HEADS,long long OID,int persons);
void ManagerLoggedinpage(HEADSFORHFILE);
void menuLogo(void);
void menuHeader(void);
void menuFooter(void);
void menuRow(const char *item_name, const char *item_no, const char *spice, const char *type, const char *allergens, const char *price,int veg);
int  get_wrapped_lines(const char *text, int max_width);
void print_wrapped_text(const char *text, int max_width, int line);
void searchByNamePage(HEADS,long long OID,int persons);
void searchByPriceRange(HEADS,long long OID,int persons);
void filterByAllergens(HEADS,long long OID,int persons);
void ManageMenuPage(HEADS);
void filterByVeg(HEADS,long long OID,int persons);
void ManageTablesPage(HEADS);
void addTablePage(HEADS);
void removeTablePage(HEADS);
void updateItemPage(HEADS);
void removeItemPage(HEADS);
void addItemPage(HEADS);
void calculateTop10ItemsAndDisplayGraph(HEADS);
void SalesAnalysisPage(HEADS);
void ManageOrdersPage(HEADS);
void GenerateBillforManager(HEADS ,long  orderID);
void ShowGitHubQR();
void showStaticUPIQR(HEADS,long long OID,int persons);
void ThankYouPage();
void TodaysSales(HEADS);
void SpecificSales(HEADS);
void drawBarGraph(int revenue[], int size,HEADS);
void displayCurrentOrders(HEADS);
void showDynamicUPIQR(HEADS,long long int OID,int persons,float amount);
void showTablesPage(HEADS);




#endif
