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
//armazena a quantidade de linhas, colunas e os valores dos indices da matriz;

Matriz* novaMatriz(int lin, int col);
//Fun��o de inicializa��o de uma matriz, recebendo o numero de linhas e colunas e retorna um ponteiro do tipo Matriz.
//ex: mat = novaMatriz(2, 2);

void preencherMatriz(Matriz *m);
//Procedimento de inser��o dos valores de uma matriz, linha a linha;

void exibirMatriz(Matriz *m);
//Procedimento de exibi��o dos valores de uma matriz, linha a linha;

Matriz* somarMatriz(Matriz *m1, Matriz *m2);
//Fun��o para somar matrizes. Recebe dois ponteiros das matrizes que quer somar e retorna um ponteiro da matriz resultante.
//ex: matSoma = somarMatriz(mat1, mat2);

Matriz* subtrairMatriz(Matriz *m1, Matriz *m2);
//Mesma l�gica da soma
//ex: matSub = subtrairMatriz(mat1, mat2);

Matriz* transposta(Matriz *m);
//Fun��o para transpor matrizes. Recebe uma matriz e retorna sua transposta;
//ex: mat_T = transposta(mat);

Matriz* produtoMatriz(Matriz *m1, Matriz *m2);
//Fun��o para multiplicar matrizes. Recebe dois ponteiros das matrizes que quer multiplicar e retorna um ponteiro da matriz resultante.
//ex: mat_P = produtoMatriz(mat1, mat2);

#endif // MATRIZ_H_INCLUDED
