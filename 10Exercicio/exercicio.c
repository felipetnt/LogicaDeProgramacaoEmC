#include <stdio.h>
int main(){
    int A;
    int B;
    int soma;
   
    printf("digite o valor do primeiro numero inteiro:\n");
    scanf("%d", &A);
    printf("digite o valor do segundo numero inteiro:\n");
    scanf("%d", &B);
    
    soma = A + B;

    printf("Aqui esta o resultado da soma:%d \n", soma);

    return 0;
}