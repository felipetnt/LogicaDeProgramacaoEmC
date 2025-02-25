/*Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que 
informe se a soma de A com B é menor, maior ou igual a C*/
#include <stdio.h>
int main(){
    int A;
    int B;
    int C;

    printf("Informe o valor de A: \n");
    scanf("%d", &A);

    printf("Informe o valor de B: \n");
    scanf("%d", &B);

    printf("Informe o valor de C comparado a soma de A e B: \n");
    scanf("%d", &C);

    if(A + B > C){
        printf("A soma de A e B eh maior que o valor de C ");
    } else {
        if(C > A + B){
            printf("O valor de C vale mais que a soma de A e B");
        } else {
            printf("O valor de C eh igual a soma de A e B");
        }

    }

    return 0;
}