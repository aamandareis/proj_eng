#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

/*
	Como declarar um tipo Matriz:
	Deve ser declarado como um ponteiro.
	ex:	Matriz *mat;

	O tipo Matriz armazena a ordem da matriz (linhas e colunas) e os valores em forma de matriz de ponteiros tipo double:
	typedef struct matriz{
		int linhas;
		int colunas;
		double **matriz;
	}Matriz;
*/

typedef struct matriz Matriz;


Matriz* novaMatriz(int lin, int col);


void preencherMatriz(Matriz *m);


void exibirMatriz(Matriz *m);


Matriz* somarMatriz(Matriz *m1, Matriz *m2);


Matriz* subtrairMatriz(Matriz *m1, Matriz *m2);


Matriz* transposta(Matriz *m);


Matriz* produtoMatriz(Matriz *m1, Matriz *m2);


#endif 
