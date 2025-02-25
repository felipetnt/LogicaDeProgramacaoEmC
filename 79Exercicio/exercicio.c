// Faça um algoritmo que leia a primeira letra do estado civil de uma pessoa e 
// mostre uma mensagem com a sua descrição (Solteiro, Casado, Viúvo, 
// Divorciado, Desquitado). Mostre uma mensagem de erro, se necessário. 

#include <stdio.h>
int main(){
    char estdcivil;

    printf("Imprima aqui, a primeira letra do seu estado civil. \n");
    scanf("%c", &estdcivil);
    getchar();

    switch (estdcivil)
    {
    case 'S':
        printf("Seu estado civil atual eh solteiro.");
        break;
    case 'C':
        printf("Seu estado civil atual eh casado.");
        break;
    case 'V':
        printf("Seu estado civil atual eh viuvo.");
        break;
    case 'D':
        printf("Seu estado civil eh divorciado ou desquitado.");
        break;

    default: 
    printf("A letra mencionada, nao possui estado civil disponivel.");
        break;

    }
    return 0;
}