/*Faça um algoritmo que leia um valor inteiro e apresente os resultados do 
quadrado e do cubo do valor lido. 
Entrada: Valor Inteiro: Inteiro
Saída: Valor Inteiro ao Cubo e ao Quadraddo: Inteiro*/

#include <stdio.h>
int main(){
    int valor;
    int quadrado;
    int cubo;

    printf("Digite aqui o numero que voce quer saber o valor ao quadrado e ao cubo: \n");
    scanf("%d", &valor);

    quadrado = valor * valor;

    printf("Aqui esta o valor do quadrado: %d \n", quadrado);

    cubo = quadrado * valor;

    printf("Aqui esta o valor do cubo %d \n", cubo);
    return 0;









}