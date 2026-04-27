#include <stdio.h>
#include <stdlib.h>

typedef enum
{
	MOTO,
	BICI
}TipoVehiculo;

typedef enum
{
	DISPONIBLE,
	EN_VIAJE,
	TALLER
}EstadoRepartidor;

typedef union
{
	int cilindrada;
	char tipoCuadro[20];
}DetallesVehiculo;



typedef struct
{
	int borrado;
	int id;
	char nombre[50];
	TipoVehiculo vehiculo;
	DetallesVehiculo detalles;
	EstadoRepartidor estadoRepartidor;
}Repartidor;

int menu()
{
	int opcion;

	printf("1.Agregar.\n");
	printf("2.Mostrar todos.\n");
	printf("3.Motos en Taller.\n");
	printf("4.Salir\n");
	printf("Elige una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

void AgregarRepartidor(int *total, Repartidor **flotilla)
{
	Repartidor *p = NULL;
	if(*total == 0)
	{
		p = (p)malloc(1 * flotilla);
	}
	else
	{
		p = (p)realloc(Repartidor *total + 1);
	}

	if(p ==	NULL)
	{
		print("Error");
	}

	*flotilla = p;

}

int main()
{  
	Repartidor *flotilla = NULL;
	int totalRepartidores = 0, opcion;

	do
	{
		opcion = menu();
		switch(opcion)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			default:
				printf("Error");
				break;
		}
	}while(opcion != 4);	

	return 0;
}
