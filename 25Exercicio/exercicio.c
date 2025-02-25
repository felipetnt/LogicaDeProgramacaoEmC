/*Faça um algoritmo que leia dois números inteiros (Int1 e Int2) e imprima o 
quociente e o resto da divisão inteira de Int1 por Int2. 
Entrada: */

#include <stdio.h>
int main(){ 

    int int1;
    int int2;
    int int3;
    int int4;

    printf("Para dividir dois valores, digite aqui o divisor valor: \n");
    scanf("%d", &int1);
    printf("Agora, digite aqui o dividendo valor: \n");
    scanf("%d", &int2);

    int3 = int1 % int2;
    int4 = int1 / int2;

    printf("O resultado da divisao eh: %d \n", int4);
    printf("O resto da divisao eh: %d \n", int3);
    
    return 0;

}