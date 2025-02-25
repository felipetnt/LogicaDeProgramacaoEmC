//Faça um algoritmo que leia dois números A e B e imprima o maior deles.
//Entrada A e B
//Saida O maior dos numeros

#include <stdio.h>
int main(){
    int A;
    int B;

    printf("Informe o valor de A: \n");
    scanf("%d", &A);
    printf("Informe o valor de B: \n");
    scanf("%d", &B);

    if( A > B){
        printf("O valor do maior deles eh: %d", A);
    } else {
        printf("O Valor do maior deles eh: %d", B);
    }
    return 0;
    
    




}