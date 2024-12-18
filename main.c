int OS=2;

#include "ui.h"
#include "upi_qr.c"



int main(void) {

    logAction("main.c", "BEGIN -> MAIN");

    Menu *menuHead = loadMenu();
    Tables *tablesHead = loadTables();
    OrderHistory *orderHistoryHead = loadOrderHistory();
    CurrentOrders *currentOrdersHead = loadCurrentOrders();

    // OsSelectionPage(PASSHEADS);
    // SalesAnalysisPage(PASSHEADS);
    StartupPage(PASSHEADS);


    deleteMenu(menuHead);
    deleteTables(tablesHead);
    deleteOrderHistory(orderHistoryHead);
    deleteCurrentOrders(currentOrdersHead);

    return 0;
}
