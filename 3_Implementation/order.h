#include <stdio.h>
//#include "person.h"
//#include "fooditem.h"
#include "billing.h"
void order(int menuSize, struct FoodItem menu[], struct Person person) {
    printf("\n\nThis is your order page\n");
    printf("Enter the corresponding number for the items and the quantity \n");
    printf("For example 1 10 means 10 %s \n", menu[0].name);
    printf("Press -1 to place your order\n");
    int order[menuSize];
    int i;
    for( i=0;i<menuSize;i++)
        order[i]=0;
    int flag = 1;
    while(flag ==1){
        int choice = 0;
        int quantity = 0;
        scanf("%d %d", &choice, &quantity);
        if(choice == -1){
            printf("-1\n");
            break;
        }
        else if(choice>=1 && choice<=menuSize){
        order[choice-1]+=quantity;
        printf("%d %d\n", choice, quantity);
        }
        else{
            printf("Invalid item");
        }
        }

    printf("\n\nYour order is \n");

    int count = 0 ;
    for(i=0;i<menuSize;i++) {
        if(order[i] != 0){
            printf("%s %d \n", menu[i].name, order[i]);
            count++;
        }
    }

    if(count!=0)
        billings(order, count, menu, menuSize, person);
}