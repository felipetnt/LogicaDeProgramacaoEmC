/*Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado 
da soma do quadrado de cada valor lido..
Entrada: Valor de A e B
Saída: Soma do quadrado dos dois valores*/

#include <stdio.h>
int main(){

    int A;
    int B;
    int quadA;
    int quadB;
    int somaquad;

    printf("Para descobrir o valor da soma do quadrado de dois valores, digite aqui o primeiro valor: \n");
    scanf("%d", &A);

    printf("Agora, digite aqui o segundo valor: \n");
    scanf("%d", &B);

    quadA = A * A;
    quadB = B * B;
    somaquad = quadA + quadB;

    printf("A soma do quadrado dos dois valores e: %d \n", somaquad);
    return 0;






}