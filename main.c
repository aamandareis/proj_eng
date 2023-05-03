#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
int main(){

//void main()
{
    print_name();
}

Matriz *A, *B, *C;
A = novaMatriz(3,3);
B = novaMatriz(3,3);

printf("( MATRIZ A)\n");
preencherMatriz(A);

printf("\n\n");
printf("( MATRIZ B )\n");
preencherMatriz(B);

printf("\n\n");
printf("( MATRIZ A )\n");
exibirMatriz(A);

printf("\n\n");
printf("( MATRIZ B )\n");
exibirMatriz(B);

printf("\n\n");

//*

C = somarMatriz(A, B);
printf("====== Teste da operação soma ======\n");
exibirMatriz(C);

printf("\n\n");

C = subtrairMatriz(A, B);
printf("====== Teste da operação subtração ======\n");
exibirMatriz(C);

printf("\n\n");

C = transposta(somarMatriz(A, B));
printf("====== Teste da operação transposta ======\n");
exibirMatriz(C);


printf("\n\n");

C = produtoMatriz(A, B);
printf("====== Teste da operação produto ======\n");
exibirMatriz(C);



return 0;
}
