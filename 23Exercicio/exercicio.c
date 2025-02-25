/*Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa 
ordem, e imprima em ordem inversa, isto é, se os dados lidos forem 5 e 9, por 
exemplo, devem ser impressos na ordem 9 e 5.
Entrada: primeiro numB e dps numA
Saida: Trocar os valores*/
#include <stdio.h>
int main(){
    float numA;
    float numB;
    float numC;    //variavel auxiliar.

    
    printf("Para realizar a troca de valores, coloque aqui o valor da variante numA:\n");
    scanf("%f", &numA);
    printf("Agora coloque aqui a variante numB: \n");
    scanf("%f", &numB);

    numC = numB;
    numB = numA;
    numA = numC;

    printf("O valor de numA a partir de agora vale: %f \n", numA);
    printf("O valor de numB a partir de agora vale: %f \n", numB);
    return 0;
}