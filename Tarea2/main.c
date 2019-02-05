#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "struct.h"
#include "crearMatrices.h"
#include "operacionesMatrices.h"
#include "validaciones.h"

int main()
{
	Matriz m1,m2;
	srand(time(NULL));
	//Especificación de tamaño de la matriz 1
	printf("Introduce los datos de las matrices\nMatriz 1\nRenglones: ");
    scanf("%d",&m1.ren);
    printf("Columnas: ");
    scanf("%d",&m1.col);
    if((m1.matriz=ordenDeMatriz(m1.ren,m1.col))==NULL)
    {
        printf("\nMemoria llena");
        return 0;
    }
    //Especificación de tamaño de la matriz 2
    printf("\nMatriz 2\nRenglones: ");
    scanf("%d",&m2.ren);
    printf("Columnas: ");
    scanf("%d",&m2.col);
    if((m2.matriz=ordenDeMatriz(m2.ren,m2.col))==NULL)
    {
        printf("\nMemoria llena");
        return 0;
    }
    //Llenado e impresión de matrices
    llenarMatriz(m1);
    llenarMatriz(m2);
    printf("Datos de matriz 1\n");
    imprimeMatriz(m1);
    printf("Datos de matriz 2\n");
    imprimeMatriz(m2);
    //Impresión de matriz 1 transpuesta
    printf("\nImpresion de matriz 1 transpuesta\n");
    imprimeTranspuesta(m1);
    //Operaciones con matrices
    printf("\nMatriz 3 = matriz 1 + matriz 2\n");
    sumaDeMatrices(m1,m2);
    printf("\nMatriz 4 = matriz 1 - matriz 2\n");
    restaDeMatrices(m1,m2);
    printf("\nMatriz 5 = matriz 1 * matriz 2\n");
    multiplicaMatrices(m1,m2);
    //Liberar memoria
    free(m1.matriz);
    free(m2.matriz);

    return 0;
}
