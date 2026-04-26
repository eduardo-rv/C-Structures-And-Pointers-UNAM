#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[30];
	int price;
	int quantity;
}Product;

void addProduct(int *count, Product **inventory)
{
	Product *temp = NULL;

	if(count == 0)
	{
		temp = (Product *)malloc(1 * sizeof(Product));
	}
	else
	{
		temp = (Product *)realloc(*inventory ,(*count + 1) * sizeof(Product));  
	}

	if (temp == NULL)
	{
		printf("Memory allocation failed.\n");
		return;
	}
	

	printf("Enter product name: ");
	scanf("%s", temp[*count].name);

	printf("Enter price: ");
	scanf("%d", &temp[*count].price);

	printf("Enter quantity: ");
	scanf("%d", &temp[*count].quantity);
	

	*inventory = temp;
	*count = *count + 1;

	printf("Product added successfully\n\n");
}


void displayInventory(int count, Product *inventory)
{
	if (count == 0)
	{
		printf("\nThe inventory is empty\n\n");
		return;
	}

	printf("---Current Inventory---\n");

	int i;
	for(i = 0; i < count; i++)
	{
		printf("Item: %d\n", i + 1);
		printf("Name: %s\n", inventory[i].name);
		printf("Price: $%d\n", inventory[i].price);
		printf("Quantity: %d\n", inventory[i].quantity);

		printf("\n");
	}

	printf("------------------------\n\n");

}


int main()
{
	int count = 0;
	Product *inventory = NULL;

	addProduct(&count, &inventory);
	addProduct(&count, &inventory);

	displayInventory(count, inventory);

	if (inventory != NULL)
	{
		free(inventory);
		inventory = NULL;
	}
	return 0;
}
