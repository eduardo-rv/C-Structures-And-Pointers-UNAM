#include <stdio.h>

// Creamos la estructura
typedef struct
{
	float real;
	float imaginaria;
} Complejo;

// Funcion para ingresar datos
Complejo Leer()
{
	Complejo numero;

	printf("Lectura de complejos: \n");
	printf("Parte real: \n");
	scanf("%f", &numero.real);
	printf("Lectura de parte imaginaria: \n ");

}

int main()
{
	printf("Hello World");

	return 0;
}
