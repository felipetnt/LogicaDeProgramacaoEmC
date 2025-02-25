//Faça um algoritmo para calcular a transposta de uma matriz. 
#include <stdio.h>
int main(){
    int mat[2][3] = { {1 ,2 ,3}, {4, 5 ,6} };
    int matTransposta[3][2];
    int i;
    int j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            matTransposta[j][i] = mat[i][j];
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matTransposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}