#include <stdio.h>
#include "person.h"
#include "fooditem.h"

#include "order.h"
#include "Menu.h"
int main() {
	//code
	

	
	    printf("Welcome admin \n");
	    printf("Please input the menu size\n");
	    
	    int menuSize;
	    scanf("%d", &menuSize);
	    printf("%d \n", menuSize);
	    struct FoodItem menu[3];
        printf("Enter the item name and price For Exaple Pizza 180\n");
        int i;
	    for(i=0;i<menuSize;i++){
            scanf("%s %f", menu[i].name, &menu[i].price);
            printf("%s %f \n", menu[i].name, menu[i].price);
	    }
	
    	struct Person person;
    	printf("\n \nHello Customer please enter your name \n");
    	scanf("%s", person.name);
    	printf("%s\n", person.name);
    	printf("Please enter your phone\n");
        scanf("%s", person.phone);
        printf("%s\n", person.phone);
    	printf( "\n\nWelcome to our resturant ");
    	printf("%s \n" ,person.name );
    	
    	printf("For menu press 1 \nTo exit press 2 \n");
    	int choice;
    	scanf("%d", &choice);
    	printf("\nYour choice is %d \n", choice);
    	
    	
        
    	switch (choice){
    	    case 1: showMenu(menu, menuSize); order(sizeof(menu)/sizeof(menu[0]), menu, person); break;
    	    case 2: return 0;
    	    default: printf("Enter a valid choice\n");
    	}
        while(1){
            int a;
            scanf("%d",&a);
            if (a == 0) return 0;
        }
	
	return 0;
}
