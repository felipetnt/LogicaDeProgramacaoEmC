#include <stdio.h>
int main(){
    float A;
    float B;
    float C;    //variavel auxiliar.

    /*Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca 
dos valores de forma que a variável A passe a possuir o valor da variável B e a 
variável B passe a possuir o valor da variável A. Apresente os valores trocados. */
    
    printf("Para realizar a troca de valores, coloque aqui o valor da variante A:\n");
    scanf("%f", &A);
    printf("Agora coloque aqui a variante B: \n");
    scanf("%f", &B);

    C = B;
    B = A;
    A = C;

    printf("O valor de A agora vale: %f \n", A);
    printf("O valor de B agora vale: %f \n", B);
    return 0;
}