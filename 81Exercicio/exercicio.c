// Crie um algoritmo para ler uma letra do alfabeto e mostrar uma mensagem: se é 
// vogal ou consoante. 
#include <stdio.h>
int main(){
    char letra;

    printf("Afim de descobrir se a letra do alfabeto eh uma vogal ou consoante, digite aqui a letra EM CAIXA ALTA!: \n");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'A':   // if(strcmp(letra, a)==0)
        printf("sua letra eh uma vogal.");
        break;
    case 'E':   // if(strcmp(letra, e)==0)
        printf("sua letra eh uma vogal.");
        break;
    case 'I':   // if(strcmp(letra, i)==0)
        printf("sua letra eh uma vogal.");
        break;
    case 'O':   // if(strcmp(letra, o)==0)
        printf("sua letra eh uma vogal.");
        break;
    case 'U':   // if(strcmp(letra, u)==0)
        printf("sua letra eh uma vogal.");
        break;
    
    default:
        printf("sua letra eh uma consoante");
        break;
    }
    return 0;
}