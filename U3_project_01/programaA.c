#include <stdio.h>
#include <stdlib>

typedef struct
{
	char numeroCuenta[10];
	char nombre[30];
	char apellido1[20];
	char apellido2[20];
	char fecha_nacimiento[9];
	char telefono[30];
	char email[50];
	float estatura;
	float peso;
	//agregar mas informacion

}Alumno;

void EscribirAlumno()
{

}

int MenuActualizacion()
{

}

int menuPrincipal()
{

}

int main()
{
	int opcion;

	do
	{	
		system("clear");
		opcion = menuPrincipal;

		switch(opicion)
		{
			case 1:
				Agregar();
				break;
			case 2:
				Buscar();
				break;
			case 3:
				Actualizar();
				break;
			case 4:
				Borrar();
				break;
			case 5:
				Listado();
				break;
			case 6:
				printf("Hasta luego\n\n");
				system("Pause");
		}


	}while(opicion != 6);

	return 0;
}
