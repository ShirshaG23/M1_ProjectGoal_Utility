#include <stdio.h>
//#include "person.h"
#include "fooditem.h"
void showMenu(struct FoodItem arr[], int menuSize){
    printf("\n\nMenu is \n");
    int i;
    for(i=0;i< menuSize;i++)
    printf("%d %s %f \n", i+1, arr[i].name, arr[i].price);
}