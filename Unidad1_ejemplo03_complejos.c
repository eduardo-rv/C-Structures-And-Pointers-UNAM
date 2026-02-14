#include <stdio.h>

//typedef tipo alias;
//typedef double realDouble;

// typedef struct {variables}  alias;

typedef struct
{
    float real;
    float imaginaria; 
} Complejo;

nano Unidad1_ejemplo03_complejos.c
Complejo Leer()
{
    Complejo numero;

    printf("Lectura de complejos\n\n");

    printf("Parte real: ");
    scanf("%f", &numero.real);

    printf("Parte imaginaria: ");
    scanf("%f", &numero.imaginaria);

    return numero;
}

void Escribir(Complejo )
{
    if(numero.imaginaria >= 0)
        printf("%f + %fi\n", numero.real, numero.imaginaria);
    else
        printf("%f + %fi\n", numero.real, numero.imaginaria);
}

int main()
{
    
    Complejo a,b,c;
    a = Leer();
    Escribir(a);
    

    return 0;
}
