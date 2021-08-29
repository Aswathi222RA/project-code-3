#include <stdlib.h>
#include <stdio.h>
#define BRIYANI_PRICE 150.00
#define DOSA_PRICE 43.99
#define PUTTU_PRICE 24.99
#define PIZZA_PRICE 155.99
#define VADA_PRICE 14.99
#define APPAM_PRICE 76.99

main(){

	int choice = 0;
	double totalPrice = 0;
	
	printf("Welcome to ASWATHI'S RESTAURANT!\n");
	printf("May I take your order? \n\n");

	do{
		printf("Menu: \n\n");
		printf("1. BRIYANI      ₹%.2lf \n", BRIYANI_PRICE);
		printf("2. DOSA         ₹%.2lf \n", DOSA_PRICE);
		printf("3. PUTTU        ₹%.2lf \n", PUTTU_PRICE);
		printf("4. PIZZA        ₹%.2lf \n", PIZZA_PRICE);
		printf("5. VADA         ₹%.2lf \n", VADA_PRICE);
		printf("6. APPAM        ₹%.2lf \n", APPAM_PRICE);
		printf("7. Exit\n\n");
		printf("Enter an item: ");
		scanf("%i", &choice);

		switch(choice){
		case 1:
			totalPrice += BRIYANI_PRICE;
			break;
		case 2:
			totalPrice += DOSA_PRICE;
			break;
		case 3:
			totalPrice += PUTTU_PRICE;
			break;
		case 4:
			totalPrice += PIZZA_PRICE;
			break;
		case 5:
			totalPrice += VADA_PRICE;
			break;
		case 6:
			totalPrice += APPAM_PRICE;
			break;
		case 7:
			printf("ThanK you for ordering at ASWATHI'S RESTAURANT! \n");
			break;
		default:
			printf("*** Error:  This is not on the menu. \n");
			break;
		}
		
		printf(" Your Total : ₹%.2lf\n\n", totalPrice);
	
	} while (choice != 7);

	printf("Your order is ₹%.2lf \n\n", totalPrice);
	printf("Thank you for coming to ASWATHI'S RESTAURANT.\n");
	printf("Have a nice day!.\n\n");

	system("pause");
}
