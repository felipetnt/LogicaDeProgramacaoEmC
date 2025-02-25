// Faça um algoritmo que leia um número FN, calcule e mostre os N primeiros 
// termos da sequência de Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...). O valor lido para N 
// sempre será maior ou igual a 2. 
#include <stdio.h>
int main(){
    int i = 3;
    int algarismo = 1;
    int algarismoant = 0;
    int soma = 1;
    int N;
    printf("Digite aqui o numero que deseja para a sequencia de fibonnaci: \n");
    scanf("%d", &N);
    printf("0\n");
    printf("1\n");
    while(i <= N){
        soma = algarismo + algarismoant;
        algarismoant = algarismo;
        algarismo = soma;
        printf("%d\n", soma);
        i++;
    }
    return 0;
}