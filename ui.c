#include "ui.h"


extern int OS;




void ClearScreen(){
    if (OS==1) system("cls");
    if(OS==2) system("clear");
}


// QR CODES

void showStaticUPIQR(HEADS,long long OID,int persons){

    logAction("ui.c", "showStaticUPIQR");

    ClearScreen();
  

    
      
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB              \xDB\xDB        \xDB\xDB            \xDB\xDB\xDB\xDB\xDB\xDB              \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB          \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB              \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB              \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB        \xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB                    \xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB    \xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB      \xDB\xDB\xDB\xDB      \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB      \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB        \xDB\xDB\xDB\xDB\xDB\xDB        \xDB\xDB        \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB    \xDB\xDB      \xDB\xDB  \xDB\xDB    \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB          \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB        \xDB\xDB  \xDB\xDB      \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB        \xDB\xDB    \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB    \xDB\xDB            \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB      \xDB\xDB  \xDB\xDB          \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB            \xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB      \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB        \xDB\xDB\xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB          \xDB\xDB  \xDB\xDB            \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB      \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB      \xDB\xDB      \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB        \xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB          \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB  \xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB          \xDB\xDB\n");
    printf("\xDB\xDB              \xDB\xDB      \xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB        \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB          \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB  \xDB\xDB    \xDB\xDB      \xDB\xDB\xDB\xDB\xDB\xDB              \xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB      \xDB\xDB  \xDB\xDB    \xDB\xDB  \xDB\xDB    \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB    \xDB\xDB    \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB              \xDB\xDB      \xDB\xDB        \xDB\xDB  \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
  


     printf("%s\n Press 5 to go back : %s %s",BLINKING_YELLOW,RESET,RED);
    int i;
    scanf("%d",&i);
    printf("\033[0m");
    int c;
    while ((c = getchar()) != '\n');
    Customerloggedinpage(PASSHEADS,OID,persons);


}


void ShowGitHubQR(HEADS) {

    logAction("ui.c", "ShowGitHubQR");

    ClearScreen();
    if(OS==2){
    printf("██████████████████████████████████████████████████████████████\n");
    printf("██              ████    ██████  ████      ████              ██\n");
    printf("██  ██████████  ██      ██    ████████      ██  ██████████  ██\n");
    printf("██  ██      ██  ████  ████  ████  ████  ██████  ██      ██  ██\n");
    printf("██  ██      ██  ████          ████  ██    ████  ██      ██  ██\n");
    printf("██  ██      ██  ██  ██  ██    ████  ██    ████  ██      ██  ██\n");
    printf("██  ██████████  ████  ██    ██              ██  ██████████  ██\n");
    printf("██              ██  ██  ██  ██  ██  ██  ██  ██              ██\n");
    printf("██████████████████████    ██████  ██  ████████████████████████\n");
    printf("██  ██  ██  ██  ████  ████  ██████    ████  ██████  ████  ████\n");
    printf("██  ██    ████████  ████      ██        ██  ██  ████  ████  ██\n");
    printf("██████████████        ██    ██          ████        ██      ██\n");
    printf("████████  ██████  ████████      ██      ██  ████    ████  ████\n");
    printf("████            ████  ██  ████    ██  ██          ██  ██    ██\n");
    printf("████        ████    ██████  ██    ██  ████████  ████  ████  ██\n");
    printf("██████          ██    ██  ██  ████████████████  ████  ██    ██\n");
    printf("██  ██    ██████  ██        ████  ██            ██    ██  ████\n");
    printf("██      ██        ██  ██    ██████    ██        ████  ██    ██\n");
    printf("████  ██  ████████  ████      ██    ██████      ████    ██  ██\n");
    printf("██  ██  ██████  ██  ████    ██      ████████  ██    ████    ██\n");
    printf("████          ██    ██  ██      ██      ██    ██      ██  ████\n");
    printf("██  ████  ██      ██    ██████    ████              ██████████\n");
    printf("██████████████████      ██████    ██████    ██████  ██      ██\n");
    printf("██              ██████████    ██████  ██    ██  ██    ██    ██\n");
    printf("██  ██████████  ██████████  ████  ████████  ██████    ████  ██\n");
    printf("██  ██      ██  ██  ██  ██  ██████  ██████          ██████████\n");
    printf("██  ██      ██  ████  ██    ████      ████    ██    ██  ██████\n");
    printf("██  ██      ██  ██  ██████████      ██  ██  ████      ████  ██\n");
    printf("██  ██████████  ██████  ████    ██          ██    ██████  ████\n");
    printf("██              ██  ██    ██  ██  ████      ████      ██    ██\n");
    printf("██████████████████████████████████████████████████████████████\n");
    }
    else{
        system("chcp 437 > nul");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB              \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB              \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB          \xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB              \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB              \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB              \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB        \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB        \xDB\xDB    \xDB\xDB          \xDB\xDB\xDB\xDB        \xDB\xDB      \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB      \xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB            \xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB    \xDB\xDB  \xDB\xDB          \xDB\xDB  \xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB        \xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB          \xDB\xDB    \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB        \xDB\xDB\xDB\xDB  \xDB\xDB            \xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB      \xDB\xDB        \xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB        \xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB    \xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB    \xDB\xDB      \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB          \xDB\xDB    \xDB\xDB  \xDB\xDB      \xDB\xDB      \xDB\xDB    \xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB              \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB      \xDB\xDB\n");
    printf("\xDB\xDB              \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB  \xDB\xDB    \xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB    \xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB          \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB\xDB\xDB  \xDB\xDB    \xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB    \xDB\xDB    \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB      \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB      \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB  \xDB\xDB\n");
    printf("\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB    \xDB\xDB          \xDB\xDB    \xDB\xDB\xDB\xDB\xDB\xDB  \xDB\xDB\xDB\xDB\n");
    printf("\xDB\xDB              \xDB\xDB  \xDB\xDB    \xDB\xDB  \xDB\xDB  \xDB\xDB\xDB\xDB      \xDB\xDB\xDB\xDB      \xDB\xDB    \xDB\xDB\n");
    printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    

    }
    printf("%s\n Press 5 to go back : %s %s",BLINKING_YELLOW,RESET,RED);
    int i;
    scanf("%d",&i);
    printf("\033[0m");
    int c;
    while ((c = getchar()) != '\n');
    LoginPage(PASSHEADS);
  
}


void logo(void){

    logAction("ui.c", "logo");

    printf("   ____     ____            _   _             \n");
    printf("  / ___|   / ___|  ___  ___| |_(_) ___  _ __  \n");
    printf(" | |   ____\\___ \\ / _ \\/ __| __| |/ _ \\| '_ \\ \n");
    printf(" | |__|_____|__) |  __/ (__| |_| | (_) | | | | \n");
    printf("  \\____|   |____/ \\___|\\___|\\__|_|\\___/|_| |_| \n\n");
}

//===============================================================================================================

// FOR MENU

int get_wrapped_lines(const char *text, int max_width) {
    int length = strlen(text);
    return (length + max_width - 1) / max_width;  
}

void print_wrapped_text(const char *text, int max_width, int line) {
    int length = strlen(text);
    int start = line * max_width;
    if (start < length) {
        int width;
        if (length - start < max_width) {
            width = length - start;
        } 
        else {
            width = max_width;
        }
        printf("%-*.*s", max_width, width, text + start);

    } 
    else {
        printf("%-*s", max_width, " ");
    }
}

void menuRow(const char *item_name, const char *item_no, const char *spice, const char *type, const char *allergens, const char *price,int veg) {
    int max_lines = 0;
    max_lines = get_wrapped_lines(item_name, MAX_ITEM_NAME_WIDTH);
    if (get_wrapped_lines(item_no, MAX_ITEM_NO_WIDTH) > max_lines)
         max_lines = get_wrapped_lines(item_no, MAX_ITEM_NO_WIDTH);
    if (get_wrapped_lines(spice, MAX_SPICE_WIDTH) > max_lines) 
        max_lines = get_wrapped_lines(spice, MAX_SPICE_WIDTH);
    if (get_wrapped_lines(type, MAX_TYPE_WIDTH) > max_lines) 
        max_lines = get_wrapped_lines(type, MAX_TYPE_WIDTH);
    if (get_wrapped_lines(allergens, MAX_ALLERGEN_WIDTH) > max_lines) 
        max_lines = get_wrapped_lines(allergens, MAX_ALLERGEN_WIDTH);
    if (get_wrapped_lines(price, MAX_PRICE_WIDTH) > max_lines) 
        max_lines = get_wrapped_lines(price, MAX_PRICE_WIDTH);
    
    for (int line = 0; line < max_lines; line++) {
        if(veg==0)
        printf("%s| \033[92m",BLUE);
        if(veg==1)
        printf("%s| \033[93m",BLUE);
        if(veg==2)
        printf("%s| %s",BLUE,RED);
        
        print_wrapped_text(item_name, MAX_ITEM_NAME_WIDTH, line);
        printf("%s | %s",BLUE,RESET);
        print_wrapped_text(item_no, MAX_ITEM_NO_WIDTH, line);
        printf("%s | %s",BLUE,RESET);
        print_wrapped_text(spice, MAX_SPICE_WIDTH, line);
        printf("%s | %s",BLUE,RESET);
        print_wrapped_text(type, MAX_TYPE_WIDTH, line);
        printf("%s | %s",BLUE,RESET);
        print_wrapped_text(allergens, MAX_ALLERGEN_WIDTH, line);
        printf("%s | %s",BLUE,RESET);
        print_wrapped_text(price, MAX_PRICE_WIDTH, line);
        printf("%s |\n%s",BLUE,RESET);
    }
}

void menuFooter(){
    printf("%s+--------------------------------+----------+------------+-------------+---------------------------+---------+\n%s",BLUE,RESET);
}

void menuLogo(){
    printf("%s __  __  ______  _   _  _    _ \n",BLINKING_YELLOW);
    printf("|  \\/  ||  ____|| \\ | || |  | |\n");
    printf("| \\  / || |__   |  \\| || |  | |\n");
    printf("| |\\/| ||  __|  | . ` || |  | |\n");
    printf("| |  | || |____ | |\\  || |__| |\n");
    printf("|_|  |_||______||_| \\_| \\____/ \n%s",RESET);
}

void menuHeader(){
 
    printf("%s+--------------------------------+----------+------------+-------------+---------------------------+---------+\n",BLUE);
    printf("|       Item Name                |  Item No |   Spice    |     Type    |   Allergen(s)             | Price   |\n");
    printf("+--------------------------------+----------+------------+-------------+---------------------------+---------+\n%s",RESET);
          
}

void printMenu(HEADS){

    logAction("ui.c", "printMenu");
    logAction("System", "Menu has been displayed");
    
    struct Menu *menu = menuHead;
    struct Item item;
   
    menuHeader();
    while (menu!=NULL){
        
        item=menu->item;
        int type=item.itemID/1000000;
        int spice=(item.itemID/100000)%10;
        int veg=(item.itemID/10000)%10;
        long long int itemNo=(long long int)(item.itemID%10000);
        char Sprice[20];
        snprintf(Sprice, sizeof(Sprice), "%.2f", item.price);
        char Sspice[2]={spice+48,'\0'};
        char Sveg[2]={veg-48,'\0'};
        char Sno[5]={(char)(((itemNo/1000))+(long long int)48),(char)(((itemNo/100)%10)+(long long int)48),(char)(((itemNo/10)%10)+(long long int)48),(char)((itemNo%10)+(long long int)48),'\0'};

        if(type==1){
            menuRow(item.name,Sno,Sspice,"Starter",item.allergens,Sprice,veg);
        }
        if(type==0){
            menuRow(item.name,Sno,Sspice,"NIL",item.allergens,Sprice,veg);
        }
        
        if(type==2){
            menuRow(item.name,Sno,Sspice,"Main Course",item.allergens,Sprice,veg);
        }
        if(type==3){
            menuRow(item.name,Sno,Sspice,"Dessert",item.allergens,Sprice,veg);
        }
        if(type==4){
            menuRow(item.name,Sno,Sspice,"Beverage",item.allergens,Sprice,veg);
        }  
        menu=menu->next;
    }
    menuFooter();
}

void viewMenu(HEADS,long long OID,int persons){
    
    logAction("ui.c", "viewMenu");
    logAppAction("Customer", "Viewed menu");

    ClearScreen();
    menuLogo();
    printf("\n");
    printMenu(PASSHEADS);
    printf("\n %s The Following Options are available: %s",BLINKING_YELLOW,RESET);
    printf("\n %s 1 -> Search by Item Name %s",BLUE,RESET);
    printf("\n %s 2 -> Filter by Price Range %s",BLUE,RESET);
    printf("\n %s 3 -> Filter by Allergens %s",BLUE,RESET);
    printf("\n %s 4 -> Filter by Veg / Nonveg %s",BLUE,RESET);
    printf("\n %s 5 -> Go back %s",BLUE,RESET);
    printf("\n %s Your Choice :  %s",BLINKING_YELLOW,RESET);
    
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    if(choice==1){
        searchByNamePage(PASSHEADS,OID,persons);
    }
    else if(choice==2){
        searchByPriceRange(PASSHEADS,OID,persons);
    }
    else if(choice==3){
        filterByAllergens(PASSHEADS,OID,persons);
    }
    else if(choice==4){
        filterByVeg(PASSHEADS,OID,persons);
    }
    else if(choice==5){
        Customerloggedinpage(PASSHEADS,OID,persons);
    }
    else{
        viewMenu(PASSHEADS,OID,persons);
    }
}

//===============================================================================================================

// MAIN 

void StartupPage(HEADS) {

    logAction("ui.c", "StartupPage");
    logAppAction("System", "Booted the system");

    ClearScreen();
    
    printf("\033[96m***************************************************\n");
    printf("*                                                 *\n");
    printf("* \033[33m   ____     ____            _   _              \033[96m *\n");
    printf("* \033[33m  / ___|   / ___|  ___  ___| |_(_) ___  _ __    \033[96m*\n");
    printf("* \033[33m | |   ____\\___ \\ / _ \\/ __| __| |/ _ \\| '_ \\   \033[96m*\n");
    printf("* \033[33m | |__|_____|__) |  __/ (__| |_| | (_) | | | |  \033[96m*\n");
    printf("* \033[33m  \\____|   |____/ \\___|\\___|\\__|_|\\___/|_| |_|  \033[96m*\n");
    printf("*                                                 *\n");
    printf("*           \033[91m     Made by C Section    \033[96m            *\n");
    printf("*                                                 *\n");
    printf("***************************************************\n");
    printf("\n");

 
    printf(" \033[91m     Loading...\n\n \033[33m");

    for (int i = 0; i <= 20; i++) {
   
        int percentage = (i * 100) / 20;
        int progress = (i * 39) / 20;  
     
        printf("\r  || ");  
        for (int j = 0; j < 39; j++) {
            if (j <= progress){
                if(OS==1) printf("\xDB");
                if(OS==2) printf("\u2588");
            }
            else
                printf(" ");
        }
        if(percentage==80){
            usleep(1000000);
        }
        printf(" || %d%%", percentage); 

        fflush(stdout);  
        usleep(100000);  
    }

    printf("\n\n\033[0m");  
    ClearScreen();
    LoginPage(PASSHEADS);
    
}

void OsSelectionPage(HEADS){

    logAction("ui.c", "OsSelectionPage");
      
    printf("%s********************************************************\n",BLUE);
    printf("*                                                      *\n");
    printf("*         %sPlease select your operating system          %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*     %s____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|    1. WINDOWS      |    |     2. UBUNTU      |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    printf("\n %sYour Choice: %s",BLINKING_YELLOW,RESET);
    
    scanf("%d",&OS);
    int c;
    while((c=getchar())!='\n'){}
    if(OS!=1 && OS!=2){
        OsSelectionPage(PASSHEADS);
    }
    else{
        StartupPage(PASSHEADS);
    }
 
}

void LoginPage(HEADS) {

    logAction("ui.c", "LoginPage");

    ClearScreen();
    
    printf(BLUE"***************************************************************************\n");
    printf("*                                                                         *\n");
    printf("*%s   _______                 _    _    _   ____   _______  ______  _       \033[96m*\n",RED);
    printf("*%s  |__   __|    /\\         | |  | |  | | / __ \\ |__   __||  ____|| |      \033[96m*\n",RED);
    printf("*%s     | |      /  \\        | |  | |__| || |  | |   | |   | |__   | |      \033[96m*\n",RED);
    printf("*%s     | |     / /\\ \\   _   | |  |  __  || |  | |   | |   |  __|  | |      \033[96m*\n",RED);
    printf("*%s     | |    / ____ \\ | |__| |  | |  | || |__| |   | |   | |____ | |____  \033[96m*\n",RED);
    printf("*%s     |_|   /_/    \\_\\ \\____/   |_|  |_| \\____/    |_|   |______||______| \033[96m*\n",RED);
    printf("*                                                                         *\n");
    printf("*                                                                         *\n");
    printf("*            %s  ____________________      ____________________             %s*\n",YELLOW,BLUE);
    printf("*            %s |                    |    |                    |            %s*\n",YELLOW,BLUE);
    printf("*            %s |      CUSTOMER      |    |      MANAGER       |            %s*\n",YELLOW,BLUE);
    printf("*            %s |____________________|    |____________________|            %s*\n",YELLOW,BLUE);
    printf("*                                                                         %s*\n",BLUE);
    printf("*            %s  Press 1 for Customer      Press 2 for Manager             %s *\n",YELLOW,BLUE);
    printf("*                                                                         *\n");
    printf("*                       %sPress 5 for GitHub Repository%s                     *\n",BLINKING_YELLOW,BLUE);
    printf("*                                                                         *\n");
    printf("*                      %sPress 9 to Exit the Application%s                    *\n",BLINKING_YELLOW,BLUE);
    printf("*                                                                         *\n");
    printf("***************************************************************************\n");
    printf("\n \033[0m");
    int i;
    printf("%s Your Choice : %s %s",BLINKING_YELLOW,RESET,RED);
    scanf("%d",&i);
    printf("\033[0m");
    int c;
    while ((c = getchar()) != '\n');
    if(i==1){
        CustomerDetailsPage(0,PASSHEADS);
    }
    else if(i==2){
        ManagerLoginPage(0,PASSHEADS);
    }
    else if(i==5){
        ShowGitHubQR(PASSHEADS);
    }
    else if(i==9){
        ThankYouPage();
    }
    else {
        LoginPage(PASSHEADS);
    }
    
}

//===============================================================================================================

// CUSTOMER 

void CustomerDetailsPage(int flag,HEADS) {

    logAction("ui.c", "CustomerDetailsPage");
    logAppAction("Customer", "Logged in");

    char name[100];char phone[100];int persons=1;
    ClearScreen();
    printf("%s****************************************************\n",BLUE);
    printf("*                                                  *\n");
    printf("*              %sCustomer Details Page%s               *\n",YELLOW,BLUE);
    printf("*                                                  *\n");
    printf("*     %sPlease provide the following details:%s        *\n",YELLOW,BLUE);
    
    if(flag==1){
        
        printf("*              %sEnter Correct Details%s               *\n",RED,BLUE);
    }
    printf("*                                                  *\n");
    printf("****************************************************\n");
    
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Name: %s ",YELLOW,RED);
  
    scanf("%[^\n]",name);
    
    printf("\n\n%s*                                                  *\n",BLUE);
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Phone Number: %s",YELLOW,RED);
    scanf("%s",phone);
    printf("\n\n%s*                                                  *\n",BLUE);    
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Total Person: %s",YELLOW,RED);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    scanf("%d",&persons);
    printf("\n\n\n%s Enter 1 to confirm Details , 0 to Re-enter : %s %s",BLINKING_YELLOW,RESET,RED);
    int choice;
    scanf("%d",&choice);
    while ((c = getchar()) != '\n');
    if(choice==1){
        int name_flag=0;
        for (int i = 0; name[i] != '\0'; i++) {
            if (name[i] >= '0' && name[i] <= '9') { 
            name_flag=1;
            }
        }
        int phone_flag=0;
        int len=0;
        for (int i = 0; phone[i] != '\0'; i++) {
            len++;
            if (phone[i] < '0' || phone[i] > '9') { 
            phone_flag=1;
            }
        }
        if(len!=10){
            phone_flag=1;
        }
        if(phone_flag==0 && name_flag==0 && persons>0){
            long long int OID;
            currentOrdersHead=createOrder(name,phone,persons,currentOrdersHead,orderHistoryHead,&OID,tablesHead);
            Customerloggedinpage(PASSHEADS,OID,persons); 
        }
        else{
            CustomerDetailsPage(1,PASSHEADS);
        }
    }
    else{
        CustomerDetailsPage(0,PASSHEADS);
        
    }

}

void Customerloggedinpage(HEADS,long long OID,int persons){

    logAction("ui.c", "Customerloggedinpage");

    ClearScreen();
    printf("%s********************************************************\n",BLUE);
    printf("*                                                      *\n");
    printf("*                  %sWelcome to Taj Hotel                %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*    %sPlease select an option from the menu below:      %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*     %s____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|  1. Reserve Table  |    |    2. View Menu    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      *\n");
    printf("*     %s____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|  3. Order Dishes   |    |  4. Retrieve Bill  |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      *\n");
    printf("*           %sPress 5 to Go Back to the Login Page       %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    printf("\n");
    printf("\n%s Your Choice : %s",BLINKING_YELLOW,RESET);
    int choice=0;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');

    if(choice==1){
        ReserveTablePage(PASSHEADS,OID,persons);

        logAppAction("Customer", "Reserved a Table");
    }
    else if(choice==2){
        viewMenu(PASSHEADS,OID,persons);   
    }
    else if(choice==3){
        orderDishesPage(PASSHEADS,OID,persons);
        
        logAppAction("Customer", "Ordered Dishes");
    }
    else if(choice==4){
        GenerateBill(PASSHEADS,OID,persons);

        logAppAction("Customer", "Retrieved the bill");
    }
    else if(choice==5){
        LoginPage(PASSHEADS);
    }
    else{
        Customerloggedinpage(PASSHEADS,OID,persons);
    }

}

void ReserveTablePage(HEADS,long long OID,int persons){

    logAction("ui.c", "ReserveTablePage");

    ClearScreen();
    long tableNO;
    int already_reserved_flag=0;
    CurrentOrders* tempCurrentOrders=currentOrdersHead;
    while(1==1){
        
        if(tempCurrentOrders->order.orderID==(long)OID){
            if(tempCurrentOrders->order.tableNo!=0){
                already_reserved_flag=1;
                break;
            }
        }
        if(tempCurrentOrders->next==NULL){
            break;
        }
        tempCurrentOrders=tempCurrentOrders->next;
    }
    if(already_reserved_flag==1){
        tableNO=tempCurrentOrders->order.tableNo;
        
    }
    else{
    tablesHead=reserveTable(OID,persons,tablesHead,currentOrdersHead,&tableNO);
    }

    tempCurrentOrders=currentOrdersHead;
    while(1==1){
        if(tempCurrentOrders->order.orderID==OID){
            tempCurrentOrders->order.tableNo=tableNO;
            break;
        }
        if(tempCurrentOrders->next==NULL){
            break;
        }
        tempCurrentOrders=tempCurrentOrders->next;
    }
    updateCurrentOrders(currentOrdersHead);

    if(tableNO==-1){
        printf("%s****************************************************\n",BLUE);
        printf("*                                                  *\n");
        printf("*   %sApologies, but we are currently fully booked%s     *\n",BLINKING_YELLOW,BLUE);
        printf("*                                                  *\n");
        printf("****************************************************%s\n",RESET);
    }
    
    else{ 
        printf("%s****************************************************\n",BLUE);
        printf("*                                                  *\n");
        printf("*               %sBOOKING SUCCESFULL!!%s               *\n",BLINKING_YELLOW,BLUE);
        printf("*                                                  *\n");
        printf("              %sYour Table Number: %ld %s               \n",BLINKING_YELLOW,tableNO,BLUE);
        printf("*                                                  *\n");
        printf("*      %sHoping you have a great time with us!%s       *\n",BLINKING_YELLOW,BLUE);
        printf("*                                                  *\n");
        printf("****************************************************%s\n",RESET);

    }
    printf("\n%s Press 5 to go back : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    Customerloggedinpage(PASSHEADS,OID,persons);

}

void orderDishesPage(HEADS,long long OID,int persons){

    logAction("ui.c", "orderDishesPage");

    ClearScreen();
    printf("\n");
    int alreadyReserved=0;
    CurrentOrders *tempCurrentOrders=currentOrdersHead;
    while (1==1){
        if(tempCurrentOrders->order.orderID==OID){
            if(tempCurrentOrders->order.tableNo!=0){
                alreadyReserved=1;
            }
        }
        if(tempCurrentOrders->next==NULL){
            break;
        }
        tempCurrentOrders=tempCurrentOrders->next;
    }    
    if(alreadyReserved==1){
    printMenu(PASSHEADS);
        while(1==1){
            printf("%s Enter Item ID you want to order (Without Leading Zeroes) or press \'0\' to stop ordering : %s",BLINKING_YELLOW,RESET);
            long long ItemID;
            int inputStatus=scanf("%lld",&ItemID);
            if (inputStatus != 1) {
            while (getchar() != '\n');
            orderDishesPage(PASSHEADS,OID,persons);
            break;
            }
            if(ItemID==0){
                Customerloggedinpage(PASSHEADS,OID,persons);
                break;
            }
            int isValid=0;
            Menu *tempMenu=menuHead;
            while(1==1){
                
                
                if(tempMenu->item.itemID%10000==ItemID){
                    isValid=1;
                }
                if(tempMenu->next==NULL){
                    break;
                }
                tempMenu=tempMenu->next;
            }
            if(tempMenu->item.itemID==ItemID) { isValid=1; }
            if(isValid==1){
            currentOrdersHead= makeOrder(ItemID,currentOrdersHead,OID);
            
            printf("%s-> Item with itemID:%lld ordered Succesfully%s\n",BLUE,ItemID,RESET);
            }
            else{
                printf("%s-> Enter Valid Item ID%s\n",RED,RESET);
            }

        }
    }
    else{
        printf("%s****************************************************\n",BLUE);
        printf("*                                                  *\n");
        printf("*       %sPlease Reserve a Seat Before Ordering%s     *\n",BLINKING_YELLOW,BLUE);
        printf("*                                                  *\n");
        printf("****************************************************%s\n",RESET);   
        printf("\n%s Press 5 to go back : %s",BLINKING_YELLOW,RESET);
        int choice;
        scanf("%d",&choice);
        int c;
        while ((c = getchar()) != '\n');
        if(choice==5){
            Customerloggedinpage(PASSHEADS,OID,persons);
        }
        else{
            orderDishesPage(PASSHEADS,OID,persons);
        }
    }

}

void searchByNamePage(HEADS,long long OID,int persons){

    logAction("ui.c", "searchByNamePage");

    ClearScreen();
    char spaces[]="                                                                      ";
    printf(BLUE"**********************************************************\n");
    printf("*                                                        *\n");
    printf("*                                                        *\n");
    printf("*                                                        *\n");
    printf("**********************************************************\n%s\n%s\033[F\033[F\033[F\033[F* %s Enter the name of the dish: %s ",spaces,spaces,YELLOW,RED);
    char dishName[50];
    scanf("%[^\n]",dishName);
    printf("\n\n\n");
    while(getchar()!='\n');

    Menu* filteredMenu = searchItemNames(dishName,menuHead);
    if(filteredMenu==NULL){
        searchByNamePage(PASSHEADS,OID,persons);
    }
    else{
        printMenu(filteredMenu,tablesHead,currentOrdersHead,orderHistoryHead);
        printf("\n %sPress 5 to go back , 0 to keep searching : %s",BLINKING_YELLOW,RESET);
        int ch;
        scanf("%d",&ch);
        int c;
        while((c=getchar())!='\n'){}
        if(ch==5){
            viewMenu(PASSHEADS,OID,persons);
        }
        else if (ch==0){
            searchByNamePage(PASSHEADS,OID,persons);
        }
        else{
            searchByNamePage(PASSHEADS,OID,persons);
        }
    }

}

void searchByPriceRange(HEADS,long long OID,int persons){

    logAction("ui.c", "searchByPriceRange");

    ClearScreen();
    char spaces[]="                                                                      ";
    printf(BLUE"**********************************************************\n");
    printf("*                                                        *\n");
    printf("*                                                        *\n");
    printf("*                                                        *\n");
    printf("**********************************************************\n%s\n%s\033[F\033[F\033[F\033[F* %s Enter Minimum Price: %s ",spaces,spaces,YELLOW,RED);
    float min;
    if(scanf("%f",&min)!=1){
        while(getchar()!='\n');
        searchByPriceRange(PASSHEADS,OID,persons);
    }

    
    printf(BLUE"\n\n*                                                        *\n");
    printf("*                                                        *\n");
    printf("*                                                        *\n");
    printf("**********************************************************\n%s\n%s\033[F\033[F\033[F\033[F* %s Enter Maximum Price: %s ",spaces,spaces,YELLOW,RED);
    float max;
    if(scanf("%f",&max)!=1){
        while(getchar()!='\n');
        searchByPriceRange(PASSHEADS,OID,persons);
    }
    printf("\n\n\n");
     Menu* filteredMenu =searchItemPrice(min,max,menuHead);
     if(filteredMenu==NULL){
        searchByPriceRange(PASSHEADS,OID,persons);
    }
    else{
        printMenu(filteredMenu,tablesHead,currentOrdersHead,orderHistoryHead);
        printf("\n %sPress 5 to go back , 0 to keep searching : %s",BLINKING_YELLOW,RESET);
        int ch;
        scanf("%d",&ch);
        int c;
        while((c=getchar())!='\n'){}
        if(ch==5){
            viewMenu(PASSHEADS,OID,persons);
        }
        else if (ch==0){
            searchByPriceRange(PASSHEADS,OID,persons);
        }
        else{
            searchByPriceRange(PASSHEADS,OID,persons);
        }
    }


}

void filterByAllergens(HEADS,long long OID,int persons){

    logAction("ui.c", "filterByAllergens");

    ClearScreen();
    char spaces[]="                                                                      ";
    printf(BLUE"**********************************************************\n");
    printf("*                                                        *\n");
    printf("*                                                        *\n");
    printf("*                                                        *\n");
    printf("**********************************************************\n%s\n%s\033[F\033[F\033[F\033[F* %s Enter Allergen you want to filter: %s ",spaces,spaces,YELLOW,RED);
 
    char allergen[50];
    if(scanf("%[^\n]",allergen)!=1){
        while(getchar()!='\n');   
        filterByAllergens(PASSHEADS,OID,persons);
    }
    while(getchar()!='\n');
    printf("\n\n");
    
    Menu* filteredMenu =searchAllergens(allergen,menuHead);
     if(filteredMenu==NULL){
        filterByAllergens(PASSHEADS,OID,persons);
    }
    else{
        printMenu(filteredMenu,tablesHead,currentOrdersHead,orderHistoryHead);
        printf("\n %sPress 5 to go back , 0 to keep searching : %s",BLINKING_YELLOW,RESET);
        int ch;
        scanf("%d",&ch);
        int c;
        while((c=getchar())!='\n'){}
        if(ch==5){
            viewMenu(PASSHEADS,OID,persons);
        }
        else if (ch==0){
            filterByAllergens(PASSHEADS,OID,persons);
        }
        else{
            filterByAllergens(PASSHEADS,OID,persons);
        }
    }


}

void filterByVeg(HEADS,long long OID,int persons){

    logAction("ui.c", "filterByVeg");

    ClearScreen();
    printf("%s********************************************************\n",BLUE);
    printf("*                                                      *\n");
    printf("*                  %s ENTER YOUR CHOICE %s                 *\n",RESET,BLUE);
    printf("*                  %s 0 -> VEG %s                          *\n",GREEN,BLUE);
    printf("*                  %s 1 -> EGG %s                          *\n",BLINKING_YELLOW,BLUE);
    printf("*                  %s 2 -> NON-VEG %s                      *\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    
    printf("\n %s Your Choice :  %s",BLINKING_YELLOW,RESET);
    int vegOrNonVeg;
    scanf("%d",&vegOrNonVeg);
    

    
    Menu* filteredMenu =searchVegEggNon(vegOrNonVeg,menuHead);
    if(filteredMenu==NULL){
        filterByVeg(PASSHEADS,OID,persons);
    }
    else{
        printMenu(filteredMenu,tablesHead,currentOrdersHead,orderHistoryHead);
        printf("\n %sPress 5 to go back , 0 to keep searching : %s",BLINKING_YELLOW,RESET);
        int ch;
        scanf("%d",&ch);
        int c;
        while((c=getchar())!='\n'){}
        if(ch==5){
            viewMenu(PASSHEADS,OID,persons);
        }
        else if (ch==0){
            filterByVeg(PASSHEADS,OID,persons);
        }
        else{
            filterByVeg(PASSHEADS,OID,persons);
        }
    }


}

//===============================================================================================================

// MANAGER

void displayOrderHistory(HEADS);

void ManagerLoginPage(int flag,HEADS){

    logAction("ui.c", "ManagerLoginPage");

    char username[100];char password[100];
    ClearScreen();;
    printf("%s****************************************************\n",BLUE);
    printf("*                                                  *\n");
    printf("*                %sManager Login Page                %s*\n",RED,BLUE);
    printf("*                                                  *\n");
    printf("*     %sPlease provide the following details:        %s*\n",RED,BLUE);
    
    if(flag==1){
        
        printf("*              %sEnter Correct Details               %s*\n",RED,BLUE);
    }
    printf("*                                                  *\n");
    printf("****************************************************\n");
    
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Username : %s",YELLOW,RED);
  
    scanf("%[^\n]",username);
    int c;
    while ((c = getchar()) != '\n');
    printf("\n\n%s*                                                  *\n",BLUE);
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Password : %s",YELLOW,RED);
    scanf("%[^\n]",password);
    
    printf("\n\n\n%s Enter 1 to confirm Details , 0 to Re-enter : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while ((c = getchar()) != '\n');
    if(choice!=1){
        ManagerLoginPage(0,PASSHEADS);
    }
    else{
    
        
    
        if (strcmp(username,"admin")==0 && strcmp(password,"123")==0){
            ManagerLoggedinpage(PASSHEADS);
        }
        else{
            ManagerLoginPage(1,PASSHEADS);
        }
    
    }

}

void ManagerLoggedinpage(HEADS){

    logAction("ui.c", "ManagerLoggedinpage");
    logAppAction("Admin", "Logged in");
    
    ClearScreen();
    printf("%s********************************************************\n",BLUE);
    printf("*                                                      *\n");
    printf("*                  %sWelcome, Dear Manager               %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*    %sPlease select an option from the menu below:      %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*     %s____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|  1. Manage Tables  |    |  2. Manage Menu    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      *\n");
    printf("*    %s ____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|  3. Manage Orders  |    |  4. Sales Analysis |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      %s*\n",BLUE);
    printf("*    %s ____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|  5. View Menu      |    |   6. Past Orders   |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      %s*\n",BLUE);
    printf("*           %sPress 9 to Go Back to the Login Page       %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    printf("\n%sYour Choice : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    if(choice==9){
        LoginPage(PASSHEADS);
    }
    else if(choice==4){
        SalesAnalysisPage(PASSHEADS);
    }
    
    else if(choice==3){
       ManageOrdersPage(PASSHEADS);
    }
    else if(choice==2){
        ManageMenuPage(PASSHEADS);
    }
    else if(choice==1){
        ManageTablesPage(PASSHEADS);
    }
    else if(choice==1){
        ManageTablesPage(PASSHEADS);
    }
    else if(choice==5){
        ClearScreen();
        menuLogo();
        printMenu(PASSHEADS);
        printf("\n%sPress 5 to go back : %s",BLINKING_YELLOW,RESET);
        int choice;
        scanf("%d",&choice);
        int c;
        while ((c = getchar()) != '\n');
        ManagerLoggedinpage(PASSHEADS);
    }
    else if(choice==6){
        
        ClearScreen();
        displayOrderHistory(PASSHEADS);
        printf("\n%sPress 5 to go back : %s",BLINKING_YELLOW,RESET);
        int choice;
        scanf("%d",&choice);
        int c;
        while ((c = getchar()) != '\n');
        ManagerLoggedinpage(PASSHEADS);
    }
    else{
        ManagerLoggedinpage(PASSHEADS);
    }
}

void ManageOrdersPage(HEADS){

    logAction("ui.c", "ManageOrdersPage");
    logAppAction("Admin", "Managing orders");

    ClearScreen();
    displayCurrentOrders(PASSHEADS);
    
    printf("\n%sPress 5 to go back , 1 to mark an order as complete : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    if(choice==1){
        printf("\n%s Enter orderID : %s",BLINKING_YELLOW,RESET);
        long long int orderID;
        scanf("%lld",&orderID);
        int c;
        while ((c = getchar()) != '\n');
        int isValid=0;
        CurrentOrders *iter=currentOrdersHead;
        while(1==1){
            if(iter->order.orderID==orderID){
                isValid=1;
            }

            if(iter->next==NULL){
                break;
            }
            iter=iter->next;
        }

        if(isValid==1){
             GenerateBillforManager(PASSHEADS,orderID);
        }
        else{
                printf("\n%sWRONG ORDER ID , press 5 to go back : %s",BLINKING_YELLOW,RESET);
            int choice;
            scanf("%d",&choice);
            int c;
            while ((c = getchar()) != '\n');
            ManageOrdersPage(PASSHEADS);
        }
    }
    else{
        ManagerLoggedinpage(PASSHEADS);
    }


}

char* getItemName(long long int itemID, Menu *menuHead) { 
    while (menuHead) { 
        if (menuHead->item.itemID % 10000 == itemID) return menuHead->item.name; 
        menuHead = menuHead->next; 
    } 
    return "Unknown"; 
}

int get_wrapped_lines_History(const char *text, int max_width) {
    int length = strlen(text);
    return (length + max_width - 1) / max_width;
}

void print_wrapped_text_History(const char *text, int max_width, int line) {
    int length = strlen(text);
    int start = line * max_width;
    if (start < length) {
        int width = (length - start < max_width) ? length - start : max_width;
        printf("%-*.*s", max_width, width, text + start);
    } else {
        printf("%-*s", max_width, " ");
    }
}

void orderHistoryFooter() {
    printf(BLUE"+----------+----------------------+-------------+-------+----------+--------+-----------+--------+----------------------+\n"RESET);
}

int get_wrapped_lines_Current(const char *text, int max_width) {
    int length = strlen(text);
    return (length + max_width - 1) / max_width;
}

void print_wrapped_text_Current(const char *text, int max_width, int line) {
    int length = strlen(text);
    int start = line * max_width;
    if (start < length) {
        int width = (length - start < max_width) ? length - start : max_width;
        printf("%-*.*s", max_width, width, text + start);
    } else {
        printf("%-*s", max_width, " ");
    }
}

void currentOrderFooter() {
    printf(BLUE"+----------+----------------------+-------------+-------+----------+--------+-----------+----------------------+\n"RESET);
}

void currentOrderRow(Order order, Menu *menuHead) {
    int max_lines = 1;
    char orderID_str[13], people_str[6], tableNo_str[11], dishNames[1024] = "";
    snprintf(orderID_str, sizeof(orderID_str), "%ld", order.orderID);
    snprintf(people_str, sizeof(people_str), "%d", order.people);
    snprintf(tableNo_str, sizeof(tableNo_str), "%ld", order.tableNo);

    for (int i = 0; order.itemIDs[i] != 0; i++) {
        strcat(dishNames, getItemName(order.itemIDs[i] % 10000, menuHead));
        if (order.itemIDs[i + 1] != 0) strcat(dishNames, ", ");
    }

    if (get_wrapped_lines_Current(dishNames, MAX_DISHES_WIDTH) > max_lines) 
        max_lines = get_wrapped_lines_Current(dishNames, MAX_DISHES_WIDTH);

    for (int line = 0; line < max_lines; line++) {
        printf(BLUE"| "RESET);
        print_wrapped_text_Current(orderID_str, MAX_ORDER_ID_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_Current(order.name, MAX_NAME_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_Current(order.phone, MAX_PHONE_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_Current(people_str, MAX_PEOPLE_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_Current(tableNo_str, MAX_TABLE_NO_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_Current(order.orderTime, MAX_TIME_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_Current(order.orderDate, MAX_DATE_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_Current(dishNames, MAX_DISHES_WIDTH, line);
        printf(BLUE" |\n"RESET);
    }
    currentOrderFooter();
}

void currentOrderHeader() {
    printf(BLUE"+----------+----------------------+-------------+-------+----------+--------+-----------+----------------------+\n");
    printf("| Order ID | Name                 | Phone       |People | Table No | Time   | Date      | Dishes               |\n");
    printf("+----------+----------------------+-------------+-------+----------+--------+-----------+----------------------+\n"RESET);
}

void displayCurrentOrders(HEADS) {

    logAction("ui.c", "displayCurrentOrders");

    if (!currentOrdersHead) {
        printf("No current orders available.\n");
        return;
    }

    currentOrderHeader();
    CurrentOrders *current = currentOrdersHead;
    while (current) {
        currentOrderRow(current->order, menuHead);
        current = current->next;
    }
}

void orderHistoryRow(Order order, Menu *menuHead) {
    int max_lines = 1;
    char orderID_str[13], people_str[6], tableNo_str[11], amount_str[11], dishNames[1024] = "";
    snprintf(orderID_str, sizeof(orderID_str), "%ld", order.orderID);
    snprintf(people_str, sizeof(people_str), "%d", order.people);
    snprintf(tableNo_str, sizeof(tableNo_str), "%ld", order.tableNo);
    snprintf(amount_str, sizeof(amount_str), "%.2f", order.amount);

    for (int i = 0; order.itemIDs[i] != 0; i++) {
        strcat(dishNames, getItemName(order.itemIDs[i] % 10000, menuHead));
        if (order.itemIDs[i + 1] != 0) strcat(dishNames, ", ");
    }

    if (get_wrapped_lines_History(dishNames, MAX_DISHES_WIDTH) > max_lines) 
        max_lines = get_wrapped_lines_History(dishNames, MAX_DISHES_WIDTH);

    for (int line = 0; line < max_lines; line++) {
        printf(BLUE"| "RESET);
        print_wrapped_text_History(orderID_str, MAX_ORDER_ID_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_History(order.name, MAX_NAME_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_History(order.phone, MAX_PHONE_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_History(people_str, MAX_PEOPLE_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_History(tableNo_str, MAX_TABLE_NO_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_History(order.orderTime, MAX_TIME_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_History(order.orderDate, MAX_DATE_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_History(amount_str, MAX_AMOUNT_WIDTH, line);
        printf(BLUE" | "RESET);
        print_wrapped_text_History(dishNames, MAX_DISHES_WIDTH, line);
        printf(BLUE" |\n"RESET);
        
    }
    orderHistoryFooter();
}

void orderHistoryHeader() {
    printf("%s+----------+----------------------+-------------+-------+----------+--------+-----------+--------+----------------------+\n",BLUE);
    printf("%s| %sOrder ID %s| %sName                 %s| %sPhone       %s|%sPeople %s| %sTable No %s| %sTime   %s| %sDate      %s| %sAmount %s| %sDishes               %s|\n",BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE,RED,BLUE);
    printf("+----------+----------------------+-------------+-------+----------+--------+-----------+--------+----------------------+\n");
}

void displayOrderHistory(HEADS) {

    logAction("ui.c", "displayOrderHistory");

    OrderHistory *orderHistoryHead1=orderHistoryHead;
    Menu *menuHead1=menuHead;
    if (!orderHistoryHead1) {
        printf("No order history available.\n");
        return;
    }

    orderHistoryHeader();
    OrderHistory *current = orderHistoryHead1;
    while (current) {
        orderHistoryRow(current->order, menuHead);
        current = current->next;
    }
}

void ManageMenuPage(HEADS){

    logAction("ui.c", "ManageMenuPage");

    ClearScreen();
    printf("%s********************************************************\n",BLUE);
    printf("*                                                      *\n");
    printf("*                  %sWelcome, Dear Manager               %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*    %sPlease select an option from the menu below:      %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*     %s____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|    1. Add Item     |    |  2. Remove Item    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      *\n");
    printf("*                %s ____________________                 %s*\n",YELLOW,BLUE);
    printf("*                %s|                    |                %s*\n",YELLOW,BLUE);
    printf("*                %s|  3. Update Price   |                %s*\n",YELLOW,BLUE);
    printf("*                %s|____________________|                %s*\n",YELLOW,BLUE);
    printf("*                                                      %s*\n",BLUE);
    printf("*                  %sPress 5 to Go Back                  %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    printf("\n");
    printf("\n%s Your Choice : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    
    if(choice==1){
        addItemPage(PASSHEADS);
    }
    else if(choice==2){
        removeItemPage(PASSHEADS);
    }
    else if(choice==3){
        updateItemPage(PASSHEADS);
    }
    else if(choice==5){
        ManagerLoggedinpage(PASSHEADS);
    }
    else{
        ManageMenuPage(PASSHEADS);
    }
   
}

void addItemPage(HEADS){

    logAction("ui.c", "addItemPage");
    logAppAction("Admin", "Added an item");

      ClearScreen();
    printf("%s******************************************************\n",BLUE);
    printf("*                                                    *\n");
    printf("*                %sAdd an Item                         %s*\n",RED,BLUE);
    printf("*                                                    *\n");
    printf("******************************************************\n");
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s Item Number : %s",YELLOW,RED);
    long int ItemID;
    if(scanf("%ld",&ItemID)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addItemPage(PASSHEADS);
    }
    int c;
    while ((c = getchar()) != '\n');
    printf("\n\n%s*                                                    *\n",BLUE);
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s Name : %s",YELLOW,RED);
    char name[100];
    if(scanf("%[^\n]",name)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addItemPage(PASSHEADS);
    }
    while ((c = getchar()) != '\n');
    printf("\n\n%s*                                                    *\n",BLUE);
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s Allergen(s) : %s",YELLOW,RED);
    char allergen[100];
    if(scanf("%[^\n]",allergen)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addItemPage(PASSHEADS);
    }
    while ((c = getchar()) != '\n');

    printf("\n\n%s*                                                    *\n",BLUE);
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s Spiciness : %s",YELLOW,RED);
    int spice;
    if(scanf("%d",&spice)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addItemPage(PASSHEADS);
    }
    while ((c = getchar()) != '\n');
    
    printf("\n\n%s*                                                    *\n",BLUE);
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s Veg/Egg/NonVeg (0/1/2) : %s",YELLOW,RED);
    int veg;
    if(scanf("%d",&veg)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addItemPage(PASSHEADS);
    }
    while ((c = getchar()) != '\n');

    printf("\n\n%s*                                                    *\n",BLUE);
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s Starter/MainCourse/Dessert/Beverage(1/2/3/4) : %s",YELLOW,RED);
    int type;
    if(scanf("%d",&type)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addItemPage(PASSHEADS);
    }
    while ((c = getchar()) != '\n');

    printf("\n\n%s*                                                    *\n",BLUE);
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s Price : %s",YELLOW,RED);
    float price;
    if(scanf("%f",&price)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addItemPage(PASSHEADS);
    }

    while ((c = getchar()) != '\n');


    printf("\n\n\n%s Enter 1 to confirm Details , 0 to Re-enter , 5 to go back: %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while ((c = getchar()) != '\n');
    if(choice==1){
         int isValid=1;
        Menu *iter=menuHead;
        while(1==1){
            if(ItemID==iter->item.itemID%10000) isValid=0;
            if(iter->next==NULL) break;
            iter=iter->next;
        }
        if(isValid==1){

            Item* item=(Item*)(malloc(sizeof(Item)));
            item->itemID=ItemID+type*1000000+spice*100000+veg*10000;
            strcpy(item->allergens, allergen); 
            strcpy(item->name, name); 
            item->price=price;

            if(spice>9 || veg>2 ||type>4 || price<0){
                 printf("\n\n\n%s Wrong Details !! , 0 to try again , 5 to go back: %s",BLINKING_YELLOW,RESET);
            }
            else{
            menuHead= addNewItem(item,menuHead);
            printf("\n\n\n%s Item Added !! , 0 to Add more , 5 to go back: %s",BLINKING_YELLOW,RESET);
            int choice;
            }
        }
        else{
            
         printf("\n\n\n%s ItemID already Exists !! , 0 to Try Again , 5 to go back: %s",BLINKING_YELLOW,RESET);
        }



         int choice;
        scanf("%d",&choice);
        while ((c = getchar()) != '\n');
        if(choice==5){
            ManageMenuPage(PASSHEADS);
        }
        else{
            addItemPage(PASSHEADS);
        }
    }
    else if(choice==5){
        ManageMenuPage(PASSHEADS);
    }
    else{
        addTablePage(PASSHEADS);
    }


}

void removeItemPage(HEADS){

    logAction("ui.c", "removeItemPage");
    logAppAction("Admin", "Removed an item");

      ClearScreen();
    printf("%s****************************************************\n",BLUE);
    printf("*                                                  *\n");
    printf("*                %sRemove a item                     %s*\n",RED,BLUE);
    printf("*                                                  *\n");
    printf("****************************************************\n");
    
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Item Number : %s",YELLOW,RED);
    long long int itemNO;
    if(scanf("%lld",&itemNO)!=1){
        int c;
        while ((c = getchar()) != '\n');
        removeItemPage(PASSHEADS);
    }
    int c;
    while ((c = getchar()) != '\n');
    
    printf("\n\n\n%s Enter 1 to confirm Details , 0 to Re-enter , 5 to go back: %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while ((c = getchar()) != '\n');
    if(choice==1){

        int isValid=0;
        Menu *iter=menuHead;
        while(1==1){
            if(itemNO==iter->item.itemID%10000) isValid=1;
            if(iter->next==NULL) break;
            iter=iter->next;
        }
        if(isValid==1){

                
        menuHead= deleteItem(itemNO,menuHead);
         printf("\n\n\n%s Item Removed !! , 0 to Remove more , 5 to go back: %s",BLINKING_YELLOW,RESET);

        }
        else{
            
         printf("\n\n\n%s Item Doesn't Exist !! , 0 to Try Again , 5 to go back: %s",BLINKING_YELLOW,RESET);
        }
         int choice;
        scanf("%d",&choice);
        while ((c = getchar()) != '\n');
        if(choice==5){
            ManageMenuPage(PASSHEADS);
        }
        else{
            removeItemPage(PASSHEADS);
        }
    }
    else if(choice==5){
        ManageMenuPage(PASSHEADS);
    }
    else{
        removeItemPage(PASSHEADS);
    }
}

void updateItemPage(HEADS){

    logAction("ui.c", "updateItemPage");
    logAppAction("Admin", "Updated the price of an item");

      ClearScreen();
    printf("%s****************************************************\n",BLUE);
    printf("*                                                  *\n");
    printf("*                %sUpdate an Item                    %s*\n",RED,BLUE);
    printf("*                                                  *\n");
    printf("****************************************************\n");
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Item Number : %s",YELLOW,RED);
    long long int itemNO;
    if(scanf("%lld",&itemNO)!=1){
        int c;
        while ((c = getchar()) != '\n');
        updateItemPage(PASSHEADS);
    }
    int c;
    while ((c = getchar()) != '\n');
    printf("\n\n%s*                                                  *\n",BLUE);
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s New Price : %s",YELLOW,RED);
    float price;
    if(scanf("%f",&price)!=1){
        int c;
        while ((c = getchar()) != '\n');
        updateItemPage(PASSHEADS);
    }

    while ((c = getchar()) != '\n');
    
    printf("\n\n\n%s Enter 1 to confirm Details , 0 to Re-enter , 5 to go back: %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while ((c = getchar()) != '\n');
    if(choice==1){
         int isValid=0;
        Menu *iter=menuHead;
        while(1==1){
            if(itemNO==iter->item.itemID%10000) isValid=1;
            if(iter->next==NULL) break;
            iter=iter->next;
        }
        if(isValid==1){
            menuHead= updatePrice(itemNO,price,menuHead);
            printf("\n\n\n%s Item Updated !! , 0 to Update more , 5 to go back: %s",BLINKING_YELLOW,RESET);
        }
        else{
            
         printf("\n\n\n%s Item Doesn't Exist !! , 0 to Try Again , 5 to go back: %s",BLINKING_YELLOW,RESET);
        }
       
         int choice;
        scanf("%d",&choice);
        while ((c = getchar()) != '\n');
        if(choice==5){
            ManageMenuPage(PASSHEADS);
        }
        else{
            addItemPage(PASSHEADS);
        }
    }
    else if(choice==5){
        ManageMenuPage(PASSHEADS);
    }
    else{
        updateItemPage(PASSHEADS);
    }

}

void ManageTablesPage(HEADS){

    logAction("ui.c", "ManageTablesPage");
    logAppAction("Admin", "Managed Tables");

    ClearScreen();
    printf("%s********************************************************\n",BLUE);
    printf("*                                                      *\n");
    printf("*                  %sWelcome, Dear Manager               %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*    %sPlease select an option from the menu below:      %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*     %s____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|    1. Add Table    |    |  2. Remove Table   |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      *\n");
    printf("*                   %s____________________               %s*\n",YELLOW,BLUE);
    printf("*                  %s|                    |              %s*\n",YELLOW,BLUE);
    printf("*                  %s|    3. View Table   |              %s*\n",YELLOW,BLUE);
    printf("*                  %s|____________________|              %s*\n",YELLOW,BLUE);
    printf("*                                                      *\n");
    printf("*                                                      %s*\n",BLUE);
    printf("*                  %sPress 5 to Go Back                  %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    printf("\n");
    printf("\n%s Your Choice : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    if(choice==1){
        addTablePage(PASSHEADS);
    }
    else if(choice==2){
        removeTablePage(PASSHEADS);
    }
    else if(choice==5){
        ManagerLoggedinpage(PASSHEADS);
    }
    else if(choice==3){
        showTablesPage(PASSHEADS);
    }
    else{
        ManageTablesPage(PASSHEADS);
    }
   
}

void showTablesPage(HEADS){

    logAction("ui.c", "showTablesPage");

    ClearScreen();
    
    Tables* head=tablesHead;

    printf(BLUE"+-----------+-----------+-----------+\n");
    printf("| Table No. | Capacity  | Available |\n");
    printf("+-----------+-----------+-----------+\n"RESET);

    while (head != NULL) {
        printf("|%s %-9ld %s|%s %-9ld %s| %-14s %s|\n", 
               BLINKING_YELLOW,head->table.tableNo,BLUE, 
               BLINKING_YELLOW,head->table.capacity,BLUE, 
               head->table.available ? "\033[92m Yes" : "\033[91m No",BLUE);
        printf(BLUE"+-----------+-----------+-----------+\n"RESET);
        head = head->next;
    }
    
    printf("\n%s Enter 5 to go back: %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while (( getchar()) != '\n');
    ManageTablesPage(PASSHEADS);

}

void removeTablePage(HEADS){

    logAction("ui.c", "removeTablePage");

    ClearScreen();
    printf("%s****************************************************\n",BLUE);
    printf("*                                                  *\n");
    printf("*                %sRemove A table                    %s*\n",RED,BLUE);
    printf("*                                                  *\n");
    printf("****************************************************\n");
    
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Table Number : %s",YELLOW,RED);
    long int tableNO;
    if(scanf("%ld",&tableNO)!=1){
        int c;
        while ((c = getchar()) != '\n');
        removeTablePage(PASSHEADS);
    }
    int c;
    while ((c = getchar()) != '\n');
    
    printf("\n\n\n%s Enter 1 to confirm Details , 0 to Re-enter , 5 to go back: %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while ((c = getchar()) != '\n');
    if(choice==1){
         int isValid=0;
        Tables* iter=tablesHead;
        while(1==1){
            if(tableNO==iter->table.tableNo) isValid=1;
            if(iter->next==NULL) break;
            iter=iter->next;
        }
        if(isValid==1){
        tablesHead= deleteTable(tableNO,tablesHead);
         printf("\n\n\n%s TABLE REMOVED!! , 0 to Remove more , 5 to go back: %s",BLINKING_YELLOW,RESET);
        }
        else{
            
         printf("\n\n\n%s TABLE DOESN'T EXIST !! , 0 to try again , 5 to go back: %s",BLINKING_YELLOW,RESET);   
        }
         int choice;
        scanf("%d",&choice);
        while ((c = getchar()) != '\n');
        if(choice==5){
            ManageTablesPage(PASSHEADS);
        }
        else{
            removeTablePage(PASSHEADS);
        }
    }
    else if(choice==5){
        ManagerLoggedinpage(PASSHEADS);
    }
    else{
        removeTablePage(PASSHEADS);
    }

}

void addTablePage(HEADS){

    logAction("ui.c", "addTablePage");

    ClearScreen();
    printf("%s****************************************************\n",BLUE);
    printf("*                                                  *\n");
    printf("*                %sAdd A table                       %s*\n",RED,BLUE);
    printf("*                                                  *\n");
    printf("****************************************************\n");
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Table Number : %s",YELLOW,RED);
    long int tableNO;
    if(scanf("%ld",&tableNO)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addTablePage(PASSHEADS);
    }
    int c;
    while ((c = getchar()) != '\n');
    printf("\n\n%s*                                                  *\n",BLUE);
    printf("*                                                  *\n");
    printf("*                                                  *\n");
    printf("****************************************************\033[F\033[F*  %s Capacity : %s",YELLOW,RED);
    long int capacity;
    if(scanf("%ld",&capacity)!=1){
        int c;
        while ((c = getchar()) != '\n');
        addTablePage(PASSHEADS);
    }

    while ((c = getchar()) != '\n');
    
    printf("\n\n\n%s Enter 1 to confirm Details , 0 to Re-enter , 5 to go back: %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while ((c = getchar()) != '\n');
    if(choice==1){
        int isValid=1;
        Tables* iter=tablesHead;
        while(1==1){
            if(tableNO==iter->table.tableNo) isValid=0;
            if(iter->next==NULL) break;
            iter=iter->next;
        }
        if(isValid==1){
        tablesHead= addNewTable(tableNO,capacity,tablesHead);
        printf("\n\n\n%s TABLE ADDED!! , 0 to Add more , 5 to go back: %s",BLINKING_YELLOW,RESET);
        }
        else{
            printf("\n\n\n%s TABLE ALREADY EXISTS !! , 0 to add a different table , 5 to go back: %s",BLINKING_YELLOW,RESET);
        
        }

        int choice;
        scanf("%d",&choice);
        while ((c = getchar()) != '\n');
        if(choice==5){
            ManageTablesPage(PASSHEADS);
        }
        else{
            addTablePage(PASSHEADS);
        }
        
    }
    else if(choice==5){
        ManagerLoggedinpage(PASSHEADS);
    }
    else{
        addTablePage(PASSHEADS);
    }

}

void SalesAnalysisPage(HEADS){

    logAction("ui.c", "SalesAnalysisPage");

    ClearScreen();
    printf("%s********************************************************\n",BLUE);
    printf("*                                                      *\n");
    printf("*                  %sWelcome, Dear Manager               %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*    %sPlease select an option from the menu below:      %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*     %s____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|   1. Most Bought   |    |  2. Today's Sales  |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      *\n");
    printf("*    %s ____________________      ____________________   %s*\n",YELLOW,BLUE);
    printf("*    %s|                    |    |                    |  %s*\n",YELLOW,BLUE);
    printf("*    %s|  3. Specific Sales |    |  4. 30 Days Sales  |  %s*\n",YELLOW,BLUE);
    printf("*    %s|____________________|    |____________________|  %s*\n",YELLOW,BLUE);
    printf("*                                                      %s*\n",BLUE);
    printf("*           %sPress 5 to Go Back to the Login Page       %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    printf("\n%sYour Choice : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    if(choice==5){
        ManagerLoggedinpage(PASSHEADS);
    }
    else if(choice==1){
        calculateTop10ItemsAndDisplayGraph(PASSHEADS);
    }
    else if(choice==2){
        TodaysSales(PASSHEADS);
    }
    else if(choice==3){
        SpecificSales(PASSHEADS);
    }
    else if(choice==4){
        int sales[30]={0};
        past30DaysData(orderHistoryHead,sales);
        
        drawBarGraph(sales,30,PASSHEADS);
    }
    else{
        SalesAnalysisPage(PASSHEADS);
    }

}

void TodaysSales(HEADS){

    logAction("ui.c", "TodaySales");

    ClearScreen();
    int totalOrders;
    float Revenue=todaysSalesData(orderHistoryHead,&totalOrders);
    printf("%s********************************************************\n",BLUE);
    printf("*                                                      *\n");
    printf("*                  %sToday's Sales                       %s*\n",RED,BLUE);
    printf("*                                                      *\n");
    printf("*               Total Sales: %-10.2f                *\n",Revenue);
    printf("*                                                      *\n");
    printf("*               Total Orders: %-5d                    *\n",totalOrders);
    printf("*                                                      *\n");
    printf("*               Average Order Value: %-10.2f       *\n",Revenue/totalOrders);
    printf("*                                                      *\n");
    printf("%s********************************************************\n",BLUE);
    printf("\n%s Press 5 to go back : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    SalesAnalysisPage(PASSHEADS);


}

void SpecificSales(HEADS){

    logAction("ui.c", "SpecificSales");
    
    ClearScreen();
    printf("%s******************************************************\n",BLUE);
    printf("*                                                    *\n");
    printf("*                %sSpecific Sales                      %s*\n",RED,BLUE);
    printf("*                                                    *\n");
    printf("******************************************************\n");
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s Start Date : %s",YELLOW,RED);
    char startdate[15];
    if(scanf("%s",startdate)!=1){
        int c;
        while ((c = getchar()) != '\n');
        SpecificSales(PASSHEADS);
    }
    int c;
    while ((c = getchar()) != '\n');
    printf("\n\n%s*                                                    *\n",BLUE);
    printf("*                                                    *\n");
    printf("*                                                    *\n");
    printf("******************************************************\033[F\033[F*  %s End Date : %s",YELLOW,RED);
    char enddate[15];
    if(scanf("%s",enddate)!=1){
        int c;
        while ((c = getchar()) != '\n');
        SpecificSales(PASSHEADS);
    }
    while ((c = getchar()) != '\n');
    
    
    int totalOrders;
    float total=totalRevenue(startdate,enddate,orderHistoryHead,&totalOrders);
    printf("%s\n******************************************************\n",BLUE);
    printf("*                                                    *\n");
    printf("*             Total Sales: %-10.2f                *\n",total);
    printf("*                                                    *\n");
    printf("*             Total Orders: %-5d                    *\n",totalOrders);
    printf("*                                                    *\n");
    printf("*             Average Order Value: %-10.2f        *\n",total/totalOrders);
    printf("*                                                    *\n");
    printf("%s******************************************************\n",BLUE);
    printf("\n%s Press 5 to go back : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while ((c = getchar()) != '\n');
    SalesAnalysisPage(PASSHEADS);


}

// ===========================================================================================================================================
// GRAPH 

int findMax(int revenue[], int size) {
    int max = revenue[0];
    for (int i = 1; i < size; i++) {
        if (revenue[i] > max) {
            max = revenue[i];
        }
    }
    return max;
}

void drawBarGraph(int revenue[], int size,HEADS) {

    logAction("ui.c", "drawBarGraph");

    ClearScreen();
    printf("\n");
    int maxRevenue = findMax(revenue, size);

    float scale = (float)HEIGHT / maxRevenue;
 

    // main data frame and y axis.
    for (int i = HEIGHT; i > 0; i--) {

        if (i % 5 == 0) {
            printf("%s%5d %s|%s",RED ,(int)(i * maxRevenue / HEIGHT),BLUE,BLINKING_YELLOW); 
        } else {
            printf("%s      |%s",BLUE,BLINKING_YELLOW);
        }

        for (int j = 0; j < size; j++) {
            if ((int)(revenue[j] * scale) >= i) {
                
                if(OS==1) printf(" \xDB ");
                if(OS==2) printf(" \u2588 ");

            } 
            else {
                printf("   "); 
            }
        }
        printf("\n");
    }

    // X axis
    printf("%s      +",BLUE);
    for (int j = 0; j < size; j++) {
        printf("---");
    }
    printf("\n");   
    printf("       %s",RED);
    for (int j = 0; j < size; j++) {
        printf("%2d ", size - j); 
    }
    printf("\n");
    printf("%s               1 Represents Today, 2 Represents Yesterday and so on for last 30 days.                       %s",YELLOW,RESET);
    printf("\n\n");
    printf("\n%s Press 5 to go back : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    while (( getchar()) != '\n');
    SalesAnalysisPage(PASSHEADS);

}

void calculateTop10ItemsAndDisplayGraph(HEADS) {

    logAction("ui.c", "calculateTop10ItemsAndDisplayGraph");

    ClearScreen();
    typedef struct {
        long long int itemID;
        int count;
    } ItemCount;

    ItemCount itemCounts[1000];
    int uniqueItemCount = 0;

    OrderHistory* current = orderHistoryHead;
    while (current != NULL) {
        Order order = current->order;
        for (int i = 0; i < 100 && order.itemIDs[i] != 0; i++) { 
            long long int itemID = order.itemIDs[i];
            int found = 0;

            for (int j = 0; j < uniqueItemCount; j++) {
                if (itemCounts[j].itemID == itemID) {
                    itemCounts[j].count++; 
                    found = 1;
                    break;
                }
            }

            if (!found) {
                itemCounts[uniqueItemCount].itemID = itemID;
                itemCounts[uniqueItemCount].count = 1;
                uniqueItemCount++;
            }
        }
        current = current->next;
    }

    //Bubble Sort
    for (int i = 0; i < uniqueItemCount - 1; i++) {
        for (int j = i + 1; j < uniqueItemCount; j++) {
            if (itemCounts[i].count < itemCounts[j].count) {
                ItemCount temp = itemCounts[i];
                itemCounts[i] = itemCounts[j];
                itemCounts[j] = temp;
            }
        }
    }

    int topItems = uniqueItemCount < 10 ? uniqueItemCount : 10;

    printf("%s-----------------------------------------------------------------------------\n",BLUE);
    printf("%s Item ID | Frequency                            \n",RED);
    printf("%s-----------------------------------------------------------------------------%s\n\n",BLUE,RESET);

    int maxBars = 50;
    int maxFrequency = itemCounts[0].count;

    for (int i = 0; i < topItems; i++) {
        long long int itemID = itemCounts[i].itemID;
        int barLength = (itemCounts[i].count * maxBars) / maxFrequency;  // Scaling

        printf("%s%8lld%s | %s",RED, itemID,BLUE,BLINKING_YELLOW);
        for (int j = 0; j < barLength; j++) {
            if(OS==1) printf("\xDB");
            if(OS==2) printf("\u2588");
        }

        Menu* menuCurrent = menuHead;
        char dishName[100] = "\0";
        while (1==1) {
            if (menuCurrent->item.itemID%10000 == itemID) {
                strcpy(dishName, menuCurrent->item.name); 
                break;
            }
            if(menuCurrent->next==NULL) break;
            menuCurrent = menuCurrent->next;
        }
        printf("%s  %d (%s)\n\n%s",GREEN ,itemCounts[i].count, dishName,RESET);
    }

    printf("%s-------------------------------------------------------------------------------%s\n",BLUE,RESET);
     printf("\n%sPress 5 to go back : %s",BLINKING_YELLOW,RESET);
    int choice;
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n');
    if(choice==5){
        SalesAnalysisPage(PASSHEADS);
    }
    else{
        calculateTop10ItemsAndDisplayGraph(PASSHEADS);
    }
}

//===============================================================================================================

// BILL GENERATION 

void GenerateBill(HEADS ,long long orderID,int persons) {

    logAction("ui.c", "GenerateBill");

    ClearScreen();
    CurrentOrders* currentOrderNode = currentOrdersHead;
    while (currentOrderNode != NULL) {
        if (currentOrderNode->order.orderID == orderID) {
            break;
        }
        currentOrderNode = currentOrderNode->next;
    }

    if (currentOrderNode == NULL) {
        printf("Order with ID %lld not found.\n", orderID);
        return;
    }

    Order* order = &currentOrderNode->order;

    printf("%s********************************************************\n", BLUE);
    printf("*                                                      *\n");
    printf("*                        %sINVOICE                       %s*\n", RED, BLUE);
    printf("*                       %sTAJ HOTEL                      %s*\n", RED, BLUE);
    printf("*                                                      *\n");
    printf("*                                                      *\n");
    printf("*  %sCustomer Details                                    %s*\n", YELLOW, BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);
    printf("*  %-15s : %-34ld%s*\n", "Order ID", order->orderID, BLUE);
    printf("*  %-15s : %-34s%s*\n", "Customer Name", order->name, BLUE);
    printf("*  %-15s : %-34s%s*\n", "Phone", order->phone, BLUE);
    printf("*  %-15s : %-34ld%s*\n", "Table Number", order->tableNo, BLUE);
    printf("*  %-15s : %-34s%s*\n", "Order Date", order->orderDate, BLUE);
    printf("*  %-15s : %-34s%s*\n", "Order Time", order->orderTime, BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);

    printf("*  %sItem Name                          Price %s         %s*\n", YELLOW,(OS==1)?"Rs" : "₹ " ,BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);

    float grandTotal = 0.0;

    for (int i = 0; i < 100 && order->itemIDs[i] != 0; i++) {
        long long int itemID = order->itemIDs[i];

        Menu* currentMenuNode = menuHead;
        while (currentMenuNode != NULL) {
            if (currentMenuNode->item.itemID % 10000 == itemID) {
                printf("*  %-34s  %-16.2f%s*\n", currentMenuNode->item.name, currentMenuNode->item.price, BLUE);
                grandTotal += currentMenuNode->item.price;
                break;
            }
            currentMenuNode = currentMenuNode->next;
        }
    }

    float sgst = grandTotal * 0.09; // 9% SGST
    float cgst = grandTotal * 0.09; // 9% CGST
    float totalWithTax = grandTotal + sgst + cgst;

    


    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);
    printf("*%s  %-33s   %-16.2f%s*\n",RESET, "SubTotal", grandTotal, BLUE);
    printf("*%s  %-33s   %-16.2f%s*\n",RESET, "SGST (9%)", sgst, BLUE);
    
    printf("*%s  %-33s   %-16.2f%s*\n",RESET, "CGST (9%)", cgst, BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);
    printf("*%s  %-33s   %-16.2f%s*\n", GREEN, "GRAND TOTAL", totalWithTax, BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);
    printf("*                                                      *\n");
    printf("*   %sThank you for dining with us! Have a great day!    %s*\n", RED, BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    printf(RESET);
     printf("\n%s Press 5 to go back  , 1 to pay with UPI: %s",BLINKING_YELLOW,RESET);
        int choice;
        scanf("%d",&choice);
        int c;
        while ((c = getchar()) != '\n');
        if(choice==5){
            Customerloggedinpage(PASSHEADS,orderID,persons);
            
        }
        else if(choice==1){
           (OS==1)? showStaticUPIQR(PASSHEADS,orderID,persons) : showDynamicUPIQR(PASSHEADS,orderID,persons, totalWithTax);
        }
        else{
            GenerateBill(PASSHEADS,orderID,persons);
        }
}

void GenerateBillforManager(HEADS ,long orderID) {
    ClearScreen();
    CurrentOrders* currentOrderNode = currentOrdersHead;
    
        // printf("After: %ld\n",orderID);
    while (1==1) {
        // printf("in loop: %ld\n",currentOrderNode->order.orderID);
        if (currentOrderNode->order.orderID == orderID) {
            break;
        }
        if(currentOrderNode->next==NULL){
            
            break;
        }
        currentOrderNode = currentOrderNode->next;
    }

    

    Order* order = &currentOrderNode->order;



    printf("%s********************************************************\n", BLUE);
    printf("*                                                      *\n");
    printf("*                        %sINVOICE                       %s*\n", RED, BLUE);
    printf("*                       %sTAJ HOTEL                      %s*\n", RED, BLUE);
    printf("*                                                      *\n");
    printf("*                                                      *\n");
    printf("*  %sCustomer Details                                    %s*\n", YELLOW, BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);
    printf("*  %-15s : %-34ld%s*\n", "Order ID", order->orderID, BLUE);
    printf("*  %-15s : %-34s%s*\n", "Customer Name", order->name, BLUE);
    printf("*  %-15s : %-34s%s*\n", "Phone", order->phone, BLUE);
    printf("*  %-15s : %-34ld%s*\n", "Table Number", order->tableNo, BLUE);
    printf("*  %-15s : %-34s%s*\n", "Order Date", order->orderDate, BLUE);
    printf("*  %-15s : %-34s%s*\n", "Order Time", order->orderTime, BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);

    printf("*  %sItem Name                          Price %s         %s*\n", YELLOW,(OS==1)? "Rs":"₹ " ,BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);

    float grandTotal = 0.0;

    for (int i = 0; i < 100 && order->itemIDs[i] != 0; i++) {
        long long int itemID = order->itemIDs[i];

        Menu* currentMenuNode = menuHead;
        while (currentMenuNode != NULL) {
            if (currentMenuNode->item.itemID % 10000 == itemID) {
                // Item found
                printf("*  %-34s  %-16.2f%s*\n", currentMenuNode->item.name, currentMenuNode->item.price, BLUE);
                grandTotal += currentMenuNode->item.price;
                break;
            }
            currentMenuNode = currentMenuNode->next;
        }
    }

    float sgst = grandTotal * 0.09; // 9% SGST
    float cgst = grandTotal * 0.09; // 9% CGST
    float totalWithTax = grandTotal + sgst + cgst;

    
    currentOrdersHead=markAsComplete(orderID,currentOrdersHead,orderHistoryHead,tablesHead);

    OrderHistory* iter=orderHistoryHead;
    while(1==1){

        if(iter->order.orderID==orderID){
            iter->order.amount=totalWithTax;
        }

        if(iter->next==NULL){
            break;
        }
        iter=iter->next;
    }



    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);
    printf("*%s  %-33s   %-16.2f%s*\n",RESET, "Subtotal", grandTotal, BLUE);
    printf("*%s  %-33s   %-16.2f%s*\n",RESET, "SGST (9%)", sgst, BLUE);
    printf("*%s  %-33s   %-16.2f%s*\n",RESET, "CGST (9%)", cgst, BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);
    printf("*%s  %-33s   %-16.2f%s*\n", GREEN, "GRAND TOTAL", totalWithTax, BLUE);
    printf("*%s------------------------------------------------------%s*\n", YELLOW, BLUE);
    printf("*                                                      *\n");
    printf("*   %sThank you for dining with us! Have a great day!    %s*\n", RED, BLUE);
    printf("*                                                      *\n");
    printf("********************************************************\n");
    printf(RESET);
     printf("\n%s Press 5 to go back : %s",BLINKING_YELLOW,RESET);
        int choice;
        scanf("%d",&choice);
        int c;
        while ((c = getchar()) != '\n');
        if(choice==5){
            ManagerLoggedinpage(PASSHEADS);
            
        }
        else{
            GenerateBillforManager(PASSHEADS,orderID);
        }
}

// ENDING PAGE

void ThankYouPage() {

    logAction("ui.c", "ThankYouPage");

       ClearScreen();

    printf("\033[96m***************************************************************************\n");
    printf("*                                                                         *\n");
    printf("* \033[33m  _______                 _    _    _   ____   _______  ______  _       \033[96m*\n");
    printf("* \033[33m |__   __|    /\\         | |  | |  | | / __ \\ |__   __||  ____|| |      \033[96m*\n");
    printf("* \033[33m    | |      /  \\        | |  | |__| || |  | |   | |   | |__   | |      \033[96m*\n");
    printf("* \033[33m    | |     / /\\ \\   _   | |  |  __  || |  | |   | |   |  __|  | |      \033[96m*\n");
    printf("* \033[33m    | |    / ____ \\ | |__| |  | |  | || |__| |   | |   | |____ | |____  \033[96m*\n");
    printf("* \033[33m    |_|   /_/    \\_\\ \\____/   |_|  |_| \\____/    |_|   |______||______| \033[96m*\n");
    printf("*                                                                         *\n");
    printf("*                  \033[91m Thank you for visiting the Taj Hotel!   \033[96m              *\n");
    printf("*                                                                         *\n");
    printf("***************************************************************************\n\n");


    for (int i = 0; i <= 20; i++) {
        int percentage = (i * 100) / 20;
        int progress = (i * 39) / 20;

        printf(YELLOW"\r             || ");
        for (int j = 0; j < 39; j++) {
            if (j <= progress) {
                if(OS==1) printf("\xDB");
                if(OS==2) printf("\u2588");
            }
            else {
                printf(" ");
            }
        }
        printf(" || %d%%", percentage);

        fflush(stdout);
        usleep(100000); 
    }

    printf("\n\n\n"RESET);
    usleep(1000000); 



}







// int main (){
//     struct Menu *menuHead=loadMenu();
//     struct Tables *tablesHead=loadTables();
//     struct OrderHistory *orderHistoryHead=loadOrderHistory();
//     struct CurrentOrders *currentOrdersHead=loadCurrentOrders();
//     OsSelectionPage(PASSHEADS);
//     // SalesAnalysisPage(PASSHEADS);
//     return 0;
// }
