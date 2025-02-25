#include <stdio.h>

int main(){
    int mat[4][4]; 
    // Definindo a matriz 4x4
    //0,0- 0,1 - 0,2 - 0,3
    //1,0 !- 1,1 - 1,2 - 1,3
    //2,1 - 2,1! - 2,2 - 2,3
    //3,1 - 3,2 - 3,3! - 3,4
    int i;
    int j;
    int soma = 0;
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Digite o elemento matriz em linhas %d e colunas %d: ", i , j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 1; i < 4; i++) {
        for (j = 0; j < i; j++){
            soma += mat[i][j];
        }
    }

    // Imprimindo o resultado
    printf("A soma dos elementos abaixo da diagonal principal da matriz é: %d\n", soma);

    return 0;
}