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
Complejo division(Complejo n1, Complejo n2)
{
	Complejo resultado;

	resultado.real = n1.real / n2.real;
	resultado.imaginaria = n1.imaginaria / n2.imaginaria;

	return resultado;
}


int menu()
{
	int opcion;

	printf("Menu de operaciones con numeros complejos\n\n");
	printf("1. Lectura de los numeros\n 2. Suma\n 3. Resta\n 4. Producto\n 5. Division\n 6. Salir\n\n");

	do
	{
		printf("Ingresa una opcion: ");
		scanf("%d", &opcion);
	} while (opcion < 1 || opcion > 6);

	return opcion;
}


int main()
{
	Complejo n1, n2, resultado;
	int opcion;

	do
	{
		opcion = menu();
	} while(opcion != 6);

	switch(opcion)
	{
		case 1:
			n1 = Leer();
			n2 = Leer();
			break;
	}

	return 0;
}






















