#include <stdio.h>
#include "upi.h"
#include "card.h"
#include "paytm.h"
void paymentMode(float amount) {
    int flag = 0;
    while (!flag) {
    printf("Please Enter the payment mode\n");
    printf("0: UPI\n");
    printf("1: Debit/Credit Card\n");
    printf("2: Paytm Wallet\n");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 0: if (upi(amount) == 1) {flag = 1;} break;
        case 1: if (card(amount) == 1) {flag = 1;} break;
        case 2: if(paytmWallet(amount) == 1) {flag = 1;} break;
        default: printf("Wrong choice\n"); break;
    }
    }
}
    