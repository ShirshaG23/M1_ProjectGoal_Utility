#include <stdio.h>
#include <string.h>
int card(double amount) {
    printf("Please enter your card number\n");
    char cardNo[20];
    scanf("%s", cardNo);
    printf("Please enter your card expiry date\n");
    char cardExp[15];
    scanf("%s", cardExp);
    printf("Please enter your CVV\n");
    char cardCVV[3];
    int c = 0;
    while(c < 3) {
    scanf("%s", cardCVV);
    if(strcmp(cardCVV , "123") == 0 ){
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