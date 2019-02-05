#ifndef ordenMatriz_h
#define ordenMatriz_h

int** ordenDeMatriz(int ren,int col)
{
    int i,j;
    int** ordenM;
    if((ordenM = (int**) calloc(ren,sizeof(int *))) == NULL)
        return NULL;
    for (i=0;i<ren;i++)
        if((ordenM[i] = (int *) calloc(col,sizeof(int))) == NULL)
            return NULL;
    return ordenM;
}

void llenarMatriz(Matriz mat)
{
    int i,j;
    for(i=0;i<mat.ren;i++)
        for(j=0;j<mat.col;j++)
            mat.matriz[i][j]=rand()%10;
}

void imprimeMatriz(Matriz mat)
{
    int i,j;
    for(i=0;i<mat.ren;i++)
    {
        for(j=0;j<mat.col;j++)
            printf("%d\t",mat.matriz[i][j]);
        printf("\n");
    }
}

void imprimeTranspuesta(Matriz mat)
{
    int i,j;
    for(j=0;j<mat.col;j++)
    {
        for(i=0;i<mat.ren;i++)
            printf("%d\t",mat.matriz[i][j]);
        printf("\n");
    }
}

#endif
