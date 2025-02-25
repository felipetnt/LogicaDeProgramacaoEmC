// A série de Fibonacci é formada pela sequência: 
// 0, 1, 1, 2, 3, 5, 8, 13, 21, ... 
// Construa um algoritmo que gere e mostre a série até o vigésimo termo. 

#include <stdio.h>
int main(){
    int i;
    int algarismo = 1;
    int algarismoant = 0;
    int soma = 1;
    printf("Aqui esta a sequencia de Fibonacci ateh o vigesimo numero. \n");
    printf("%d\n", algarismoant);
    printf("%d\n", algarismo);
    for(i = 1; i <= 20; i++){
        soma = algarismo + algarismoant;
        algarismoant = algarismo;
        algarismo = soma;
        printf("%d\n", soma);
    }
    return 0;
}