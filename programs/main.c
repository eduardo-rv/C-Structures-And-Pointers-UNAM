#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
	WHOLESALE,
	RETAIL,
	GENERAL
} CustomerType;


typedef struct
{
	char name[50];
	char phone[15];
	int age;
	CustomerType type;
} Customer;


int main()
{
	Customer directory[100];
	int counter = 0, option;
	
	printf("System initialized.\n");
	
	do
	{
		printf("CUSTOMER DIRECTORY\n\n");
		printf("1. Add Customer.\n");
		printf("2. Show Customers by Type.\n");
		printf("3. Calculate Average Age.\n");
		printf("4. Save and Exit.\n");
		printf("Choose an option: ");
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				printf("Adding customer...\n");
				break;
			case 2:
				printf("Showing customers...\n");
				break;
			case 3:
				printf("Calculating average...\n");
				break;
			case 4:
				printf("Saving and exit...\n");
				break;
			default:
				printf("Invalid option\n");
		}

	}while(option != 4);



	return 0;
}
