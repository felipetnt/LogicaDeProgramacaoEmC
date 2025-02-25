// Faça um algoritmo que leia uma matriz mat 2 x 3 e imprima na tela a soma de 
// todos os elementos da matriz mat. 
#include <stdio.h>
int main(){
    int mat[2][3] = {{1,2,3}, {4, 5 , 6}};
    int i;
    int j;
    int soma = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma += mat[i][j];
        }
    }
    return 0;
}