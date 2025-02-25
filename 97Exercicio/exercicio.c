// Faça um algoritmo que leia um número e imprima a sua tabela de multiplicação 
// de 1 até 13.  
#define LIMITE 13
#include <stdio.h>
int main(){
    int numero;
    int resultado;
    int quantidade;

    printf("Insira aqui um numero para multiplica-lo de 1 a 13 : \n");
    scanf("%d", &numero);
    for(quantidade = 1; quantidade <= 13; quantidade++){
        resultado = numero * quantidade;
        printf("\nAqui esta seu resultado : %d", resultado);

    }
    return 0;
}