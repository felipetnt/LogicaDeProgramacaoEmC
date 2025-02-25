// Crie um programa que peça 10 números inteiros e apresente: a média, o maior 
// e o menor. 

#define LIMITE 10
#include <stdio.h>
int main(){
    int i = 0;
    int maior = 0;
    int menor = 0;
    int soma = 0;
    int media = 0;
    int quantidade;
    printf("Insira dez numeros logo abaixo. \n");
    for(quantidade = 1; quantidade <= LIMITE; quantidade++){
        soma;
        printf("Insira os numeros abaixo: \n");
        scanf("%d", &i);

        soma = i + soma;
        if( i> maior){
            maior = i;
        } else {
            if( i < menor){
            menor = i;
                
            } 
        }
    }
    media = soma / 10;
    printf("Aqui esta a media: %d \n", media);
    printf("Aqui esta o maior numero: %d \n", maior);
    printf("Aqui esta a menor numero: %d \n", menor);
    return 0;
}
