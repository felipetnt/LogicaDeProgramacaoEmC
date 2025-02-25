// Faça um algoritmo para somar duas matrizes.
#include <stdio.h>
int main(){
    int mat1[3][3] = { {1 ,2 ,3}, {4 ,5, 6}, {7, 8, 9} };
    int mat2[3][3] = { {1 ,2 ,3}, {4 ,5, 6}, {7, 8, 9} };
    int i; // linhas
    int j; // colunas
    int soma;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma = mat1[i][j] + mat2[i][j];
            printf("%d ", soma);
        }
        printf(" \n");
    }
    return 0;
}