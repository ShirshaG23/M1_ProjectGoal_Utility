#include <stdio.h>
#include <string.h>
int upi(double amount) {
    printf("Please enter your UPI ID\n");
    char upiID[20];
    scanf("%s", upiID);
    printf("Please enter your UPI Pin\n");
    char pin[4];
    int c = 0;
    while(c < 3) {
    scanf("%s", pin);
    if(strcmp(pin , "1234") == 0){
        printf("Payment Successful!\n");
        return 1;
    }
    else if(c!=2)
        printf("Please try again!\n");
    c++;
    }
    printf("Max retries reached!\n");
    return 0;
}