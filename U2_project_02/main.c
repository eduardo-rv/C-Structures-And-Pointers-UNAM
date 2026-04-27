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
		//puntero = (Tipo_de_dato *) malloc(cantidad * sizeof(Tipo_de_dato));
		p = (Repartidor *) malloc(1 * sizeof(Repartidor));
	}
	else
	{
		//puntero = (Tipo_de_dato *) realloc(puntero_viejo, nueva_cantidad * sizeof(Tipo_de_Dato));
		p = (Repartidor *) realloc(*flotilla, (*total + 1) * sizeof(Repartidor));
	}

	if(p ==	NULL)
	{
		printf("Error\n");
		return;
	}

	*flotilla = p;

	p[*total].borrado = 0;

	printf("ID: ");
	scanf("%d", &p[*total].id);

	printf("Nombre: ");
	scanf("%s", p[*total].nombre);

	printf("Estado Repartidor (0=Disp, 1=Viaje, 2=Taller): ");
	scanf("%d", &p[*total].estadoRepartidor);

	printf("Tipo vehiculo (0=Moto, 1=Bici): ");
	scanf("%d", &p[*total].vehiculo);

	if(p[*total].vehiculo == 0)
	{
		printf("Cilindrada: ");
		scanf("%s", &p[*total].detalles.cilindrada);
	}
	else
	{
		printf("tipo cuadro: ");
		scanf("%s", p[*total].detalles.tipoCuadro);
	}

	//incremento del contador
	*total += 1;
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
				AgregarRepartidor(&totalRepartidores, &flotilla);
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			default: 
				printf("Error\n");
				break;
		}
	}while(opcion != 4);	

	return 0;
}
