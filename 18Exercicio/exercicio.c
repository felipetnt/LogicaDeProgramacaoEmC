#include <stdio.h>
int main(){
    /*Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e 
    ALTURA e apresente o valor do volume de uma caixa retangular. Utilize para o 
    cálculo a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA. */

     float volume;
     float comprimento;
     float altura;
     float largura;
    printf("Para descobrir o volume do paralelepipedo digite seu comprimento:\n");
    scanf("%f", &comprimento);
    printf("Agora digite quanto vale sua altura:\n");
    scanf("%f", &altura);
    printf("Agora digite quanto vale sua largura:\n");
    scanf("%f", &largura);
    
    volume = largura * altura * comprimento;

    printf("O volume do paralelepedo e: %.2f \n", volume);
    return 0;
}