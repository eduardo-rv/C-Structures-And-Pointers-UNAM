#include <stdio.h>
#include <stdlib.h>

void Presentacion();
int Menu();
void Limpiar_pantalla();

typedef struct
{

	char clave[3];
	char descripcion[50];
	float costo_produccion;
	float precio_venta;
	float unidades_vendidas;
	
}Info_producto;

int main()
{
	int opcion;

	Presentacion();

	do
	{

		opcion = Menu();

		switch(opcion)
		{
			case 1:
				printf("Dar de alta un producto");
				break;
				
			case 2:
				printf("Mostrar todos los productos");
				break;

			case 3:
				printf("Editar un producto");
				break;

			case 4:
				printf("Eliminar un producto");
				break;

			case 5:
				printf("Crear grafica de columnas");
				break;

			case 6:
				printf("Crear grafica circular");
				break;

			case 7:
				//Salir
				printf("Cerrando programa...");
				break;

			default:
				//error inesperado
				printf("error del programa");
		}
	
	}while(opcion != 7);

	return 0;
}

void Limpiar_pantalla()
{
	getchar();
	system("clear");
}

void Presentacion()
{

	printf("Proyecto final. Muebleria - Equipo 05.\n\n");
	printf("1. Raulinho\n2. Evanlousky\n3. Eduarlovich/n/n");

	printf("Presiona ENTER para continuar...");

	Limpiar_pantalla();

}

int Menu()
{

	int opcion;

	printf("Menu de opciones\n\n");

	printf("1. Dar de alta un producto.\n");
	printf("2. Mostrar todos los productos\n");
	printf("3. Editar un producto.\n");
	printf("4. Eliminar un producto.\n");
	printf("5. Crear graficas de columnas.\n");
	printf("6 .Crear grafica vertical.\n");
	printf("7. Salir.\n");
	printf("Elige una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}
















