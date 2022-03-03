#include <stdio.h>
#include <string.h>
int paytmWallet(double amount) {
    printf("Please enter your paytm wallet phone number\n");
    char phoneNo[10];
    scanf("%s", phoneNo);
    printf("Please enter your pass\n");
    char paytmPass[15];
    int c = 0;
    while(c < 3) {
    scanf("%s", paytmPass);
    if(strcmp(paytmPass , "12345678") == 0) {
        printf("Payment of %d Successful!\n", amount);
        return 1;
    }
    else if(c!=2)
        printf("Please try again!\n");
    c++;
    }
    printf("Max retries reached!\n");
    return 0;
}   