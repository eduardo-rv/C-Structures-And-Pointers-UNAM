#include <stdio.h>
#include <stdlib.h>
// #include <"funciones.h">

//prototipos
void LimpiarPantalla();
int Menu();
void Caratula();
void AgregarCalificaciones();



int main()
{
	//HolaMundo();

	int opcion;

	Caratula();
	opcion = Menu();

	switch(opcion)
	{
		case 1:
			AgregarCalificaciones();
			break;

		case 2:
			LeerCalificacionesAlumno();
			break;

		case 3:
			LeerCalificacionesGrupo();
			break;

		case 4:
			ActualizarCalificaciones();
			break;

		case 5:
			BorrarCalficacionesAlumno();
			break;

		case 6:
			BorrarCalificacionesGrupo();
			break;

		case 7:
			CalcularPromedioAlumno();
			break;

		case 8:
			CalcularPromedioGrupo();
			break;

		case 9:
			printf("Finalizando tu sesion...");
			break;
		default:
			printf("Error");
	}

	return 0;
}

void LimpiarPantalla()
{
	getchar();
	system("clear");
}

void Caratula()
{
	printf("\n\n----------PROGRAMA 05. ARCHIVO DE CALIFICACIONES-----------\n\n");
	printf("Descripcion: programa que guarda los datos de alumnos en un archivo y calcula promedios ya sea del alumno o del grupo entero.\n\n");

	printf("Equipo 8: \nContreras Aviles Jose Raul\nRegalado Ramirez Evan Elliot\nRosas Vazquez Eduardo\n\n");
	printf("Presiona enter para continuar...");

	LimpiarPantalla();
}

int Menu()
{
	int opcion;
	
	do 
	{
		printf("\n\n----------Funciones disponibles-----------\n\n");
		printf("1.Agregar calificaciones de alumno.\n2.Leer calificaciones de alumnos.\n3.Leer calificacion de un grupo completo\n4.Actualizar califcaciones de alumnos.\n5.Borrar calificaciones de alumnos\n6.Borrar calificaciones de todo un grupo.\n7.Calcular promedio de un alumno.\n8.Calcular promedio de un grupo.\n9.Salir.\n\n");
		printf("Selecciona una opcion: ");
		scanf("%d", &opcion);
		
		LimpiarPantalla();

	}while(opcion < 1 || opcion > 9);

	return opcion;
}

void AgregarCalficaciones()
{

}
