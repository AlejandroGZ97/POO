#ifndef struct_h
#define struct_h

typedef struct{
	int ren;
	int col;
	int** matriz;
}Matriz;

int** ordenDeMatriz(int,int);
void llenaMatriz(Matriz);
void imprimeMatriz(Matriz);
void imprimeTranspuesta(Matriz);
void sumaDeMatrices(Matriz,Matriz);
void restaDeMatrices(Matriz,Matriz);
void multiplicaMatrices(Matriz,Matriz);
int validaSumaResta(Matriz,Matriz);
int validaMultiplicacion(Matriz,Matriz);

#endif
