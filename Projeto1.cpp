#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int numero;

    printf("Digite seu Numero: ");
    scanf("%d",&numero);

    if (numero < 0)
    {
        printf("NEGATIVO\n");
    }
    else if (numero > 0)
    {
        printf("POSITIVO\n");
    }

    if (numero == 0)
    {
        printf("Nem Positivo e Nem Negativo");
    }


    return 0;	
}