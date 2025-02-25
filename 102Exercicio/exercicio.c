// Escreva um algoritmo que determine o fatorial de um número. Para este 
// problema, tem-se como entrada o valor do número do qual se deseja calcular o 
// fatorial. O fatorial de 0 é igual a 1. O fatorial de um número N(N!) é definido 
// conforme a seguir: 
// N! = 1 * 2 * 3 * 4 * ... * (N-1) * N 
// Entrada : Numero N
// Processador : O calculo do fatorial
//Saida: Resultado.
#include <stdio.h>
int main(){
    int numero;
    int fatorial;
    int resultado = 1;
    printf("Digite abaixo, o numero que deseja descobrir o fatorial: \n");
    scanf("%d", &fatorial);

    for(numero = fatorial; numero >= 2; numero--){
        resultado = resultado * numero;
    }
    printf("%d", resultado);

    return 0;
}