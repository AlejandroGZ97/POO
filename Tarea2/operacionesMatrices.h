#ifndef operacionesMat_h
#define operacionesMat_h

void sumaDeMatrices(Matriz m1,Matriz m2)
{
    int i,j,valida;
    Matriz m4;
    if((valida=validaSumaResta(m1,m2))==0)
    {
        m4.ren=m1.ren;
        m4.col=m1.col;
        if((m4.matriz=ordenDeMatriz(m1.ren,m1.col))==NULL)
            printf("\nMemoria llena, no se puede realizar la suma\n");
        for(i=0;i<m1.ren;i++)
            for(j=0;j<m1.col;j++)
                m4.matriz[i][j]=m1.matriz[i][j]+m2.matriz[i][j];
        imprimeMatriz(m4);
        free(m4.matriz);
    }
    else
        printf("No se puede realizar la suma, la operacion no es valida\n\n");
}

void restaDeMatrices(Matriz m1,Matriz m2)
{
    int i,j,valida;
    Matriz m4;
    if((valida=validaSumaResta(m1,m2))==0)
    {
        m4.ren=m1.ren;
        m4.col=m1.col;
        if((m4.matriz=ordenDeMatriz(m1.ren,m1.col))==NULL)
            printf("\nMemoria llena, no se puede realizar la resta\n\n");
        for(i=0;i<m1.ren;i++)
            for(j=0;j<m1.col;j++)
                m4.matriz[i][j]=m1.matriz[i][j]-m2.matriz[i][j];
        imprimeMatriz(m4);
        free(m4.matriz);
    }
    else
        printf("No se puede realizar la resta, la operacion no es valida\n\n");
}

void multiplicaMatrices(Matriz m1,Matriz m2)
{
    int i,j,k,valida;
    Matriz m4;
    if((valida=validaMultiplicacion(m1,m2))==0)
    {
        m4.ren=m1.ren;
        m4.col=m2.col;
        if((m4.matriz=ordenDeMatriz(m1.ren,m2.col))==NULL)
            printf("\nMemoria llena, no se puede realizar la multiplicacion\n\n");
        for(i=0;i<m1.ren;i++)
            for(j=0;j<m2.col;j++)
                for(k=0;k<m1.col;k++)
                    m4.matriz[i][j]+=m1.matriz[i][k]*m2.matriz[k][j];
        imprimeMatriz(m4);
        free(m4.matriz);
    }
    else
        printf("No se puede realizar la multiplicacion, la operacion no es valida\n\n");
}

#endif // operacionesMat_h
