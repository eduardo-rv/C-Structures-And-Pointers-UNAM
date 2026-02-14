#include <stdio.h>

// Creamos la estructura
typedef struct
{
	float real;
	float imaginaria;
} Complejo;

// Funcion para ingresar datos tipo Complejo
Complejo Leer()
{
	Complejo numero;

	printf("Lectura de complejos: \n");
	printf("Parte real: \n");
	scanf("%f", &numero.real);
	printf("Lectura de parte imaginaria: \n ");
	scanf("%f", &numero.imaginaria);

	return numero;
}


// Funcion
void Escribir(Complejo numero)
{
	if(numero.imaginaria > 0)
	{
		printf("%.2f+%.2fi\n", numero.real, numero.imaginaria);
	}
	else
	{
		printf("%.2f%.2fi\n", numero.real, numero.imaginaria);
	}
}


// Funcion suma
Complejo suma(Complejo n1, Complejo n2)
{
	Complejo resultado;

	resultado.real = n1.real + n2.real;
	resultado.imaginaria = n1.imaginaria + n2.imaginaria;

	return resultado;
}


// Funcion resta
Complejo resta (Complejo n1, Complejo n2)
{
	Complejo resultado;

	resultado.real = n1.real - n2.real;
	resultado.imaginaria = n1.imaginaria - n2.imaginaria;

	return resultado;
}


// Funcion producto
Complejo producto(Complejo n1, Complejo n2)
{
	Complejo resultado;

	resultado.real = n1.real*n2.real - n1.imaginaria*n2.imaginaria;
	resultado.imaginaria = n1.imaginaria*n2.imaginaria + n2.real*n1.imaginaria;

	return resultado;
}


// Funcion division


int main()
{
	printf("Hello World");

	return 0;
}






















