// Faça um algoritmo que leia um número e divida-o por dois (sucessivamente) 
// ate que o resultado seja menor que 1. Mostre o resultado da ultima divisão e a 
// quantidade de divisões efetuadas. 
#include <stdio.h>
int main(){
    float num;
    int contagem = 0;

    printf("Insira um numero que sera dividido por dois ate chegar em 1.\n");
    scanf("%f", &num);

    do{

        num = num / 2;
        contagem++;

    }while(num >= 1);
    printf("O resultado da ultima divisao foi %.1f\n", num);
    printf("A quantidade de divisoes feitas foram %d", contagem);
    return 0;
}