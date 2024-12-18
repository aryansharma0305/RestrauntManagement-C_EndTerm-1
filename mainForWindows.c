int OS=1;

#include "ui.h"
#include "upi_qr2.c"

int main(void) {
    Menu *menuHead = loadMenu();
    Tables *tablesHead = loadTables();
    OrderHistory *orderHistoryHead = loadOrderHistory();
    CurrentOrders *currentOrdersHead = loadCurrentOrders();

    // OsSelectionPage(PASSHEADS);
    StartupPage(PASSHEADS);
    // ManagerLoggedinpage(PASSHEADS);

    deleteMenu(menuHead);
    deleteTables(tablesHead);
    deleteOrderHistory(orderHistoryHead);
    deleteCurrentOrders(currentOrdersHead);

    return 0;
}

