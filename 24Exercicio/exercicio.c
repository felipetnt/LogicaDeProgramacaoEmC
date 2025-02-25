/*Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e 
imprima a velocidade em m/s (metros por segundo). 
Entrada: Em km/h
Saida: Em m/s */

#include <stdio.h>
#define variacao 3.6
int main(){
    float kmporhora;
    float metroporsegundo;

    printf("Para transformar a velocidade de km/h para m/s, digite a velocidade em km/h: \n ");
    scanf("%f", &kmporhora);

    metroporsegundo = kmporhora / variacao;

    printf("A velocidade em metros por segundo e: %f \n ", metroporsegundo);
    return 0;

}