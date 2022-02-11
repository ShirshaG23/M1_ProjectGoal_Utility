#include <stdio.h>
#include "person.h"
#include "fooditem.h"
void billings (int order[], int count, struct FoodItem menu[], int menuSize, struct Person person){
    printf("\n\nThank you for ordering your food\nTo confirm your order please pay the bill\n");
    
    printf("-----------------------------------------------------------------------\n");
    printf("\n\n\t\t\tReceipt\n");
    printf("Name- %s\t\t\t\t\t\tPhone- %s\n", person.name, person.phone);
    printf("-----------------------------------------------------------------------\n");

    printf("ID       Item Name      Quantity    Price for Each  Total for each\n");
    float totalSum=0;
    int i;
    for(i=0;i<menuSize;i++){
        if(order[i]!=0){
        printf("%d\t%s\t\t%d\t\t%f\t%2f\n", i+1,menu[i].name, order[i], menu[i].price, menu[i].price*order[i]);
        totalSum+= menu[i].price* order[i];
        }
    }
    printf("-----------------------------------------------------------------------\n");
    printf("\nTotal Sum \t\t\t\t\t\t%2f\n", totalSum);
    printf("CGST @ 9%% \t\t\t\t\t\t%2f\n", totalSum*0.09);
    printf("SGST/UGST @ 9%% \t\t\t\t\t\t%2f\n", totalSum*0.09);
    printf("Net total \t\t\t\t\t\t%2f\n", totalSum + totalSum*0.18);
}