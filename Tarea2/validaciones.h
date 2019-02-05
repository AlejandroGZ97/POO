#ifndef validaciones_h
#define validaciones_h

int validaSumaResta(Matriz m1,Matriz m2)
{
    if((m1.ren==m2.ren) && (m1.ren==m1.col))
        return 0;
    else
        return 1;
}

int validaMultiplicacion(Matriz m1,Matriz m2)
{
    if(m1.col==m2.ren)
        return 0;
    else
        return 1;
}

#endif // validaciones_h
