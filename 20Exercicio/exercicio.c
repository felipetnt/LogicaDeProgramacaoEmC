/*Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado 
do quadrado da soma dos valores lidos.
Entrada: Valor de A e B
Saída: Quadrado da soma dos dois valores*/

#include <stdio.h> 
int main(){

    int A;
    int B;
    int soma;
    int quadsoma;

    printf("Para descobrir o valor do quadrado entre a soma de dois valores, digite aqui o primeiro valor: \n");
    scanf("%d", &A);

    printf("Agora, digite aqui o segundo valor: \n");
    scanf("%d", &B);

    soma = A + B;
    quadsoma = soma * soma;

    printf("O quadrado da soma dos dois valores e: %d \n", quadsoma);
    return 0;
