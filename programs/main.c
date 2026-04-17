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
	return 0;
}
