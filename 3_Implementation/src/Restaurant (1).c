/**
 * @file Untitled-1
 * @author Shirsha Ghosh
 * @brief This project is about Restraunt Delivery System
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "person.h"
#include "fooditem.h"

#include "order.h"
#include "Menu.h"
int main() {
	    printf("Welcome admin \n");
	    printf("Please input the menu size\n");
	    
	    int menuSize;
	    scanf("%d", &menuSize);
	    printf("%d \n", menuSize);
        /**
         * @brief Input is taken from the restaurant about menu, price and number of items
         * 
         */
	    struct FoodItem menu[3];
        printf("Enter the item name and price For Exaple Pizza 180\n");
        int i;
	    for(i=0;i<menuSize;i++){
            scanf("%s %f", menu[i].name, &menu[i].price);
            printf("%s %f \n", menu[i].name, menu[i].price);
	    }
        /**
         * @brief Here we take the input from the customer. Inputs are name and phone number. After that a welcome message is generated 
         * 
         */
	    while(1){
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
    	
        /**
         * @brief Construct a new switch object
         * 
         */
    	switch (choice){
            /**
             * @brief In the first case, the user give details about menu, number of items 
             * 
             */
    	    case 1: showMenu(menu, menuSize); order(sizeof(menu)/sizeof(menu[0]), menu, person); break;
            /**
             * @brief In this case, the user input is invalid and beyond the range of available items, so a message is shown to re-inut the value
             * 
             */
    	    case 2: return 0;
            /**
             * @brief By default if the user selects any other case then the system will ask them to select a valid choice
             * 
             */
    	    default: printf("Enter a valid choice\n");
    	}
        printf("Enter 1 for a new customer, to exit press 0 \n");
            int a;
            scanf("%d",&a);
            if (a == 0) return 0;
        }
	
	return 0;
}