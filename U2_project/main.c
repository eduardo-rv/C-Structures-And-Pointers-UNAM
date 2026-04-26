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

int main()
{
	int count = 0;
	Product *inventory = NULL;

	addProduct(&count, &inventory);
	addProduct(&count, &inventory);


	return 0;
}
