/*Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua 
média na variável Media e imprima seu valor. 
Entrada: Val1 e Val2
Saída: A media de Val1 e Val2*/
#include <stdio.h>
int main(){
    int val1;
    int val2;
    int media;

    printf("Para descobrir a media entre dois valores, digite aqui o primeiro valor: \n");
    scanf("%d", &val1);

    printf("Agora, digite aqui o segundo valor: \n");
    scanf("%d", &val2);

    media = (val1 + val2) / 2;

    printf("A media entre os dois valores vale: %d \n", media);
    return 0;

}
