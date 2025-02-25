// Elaborar um algoritmo para imprimir o número de dias de um dado mês e ano. 
// Anos bissextos deverão ser tratados convenientemente. 
// Dica
//  : Anos bissextos são múltiplos de 4 e não são múltiplos de 100, exceto os 
// anos múltiplos de 400, que também são bissextos. 

#include <stdio.h>
int main(){
    int anual;
    int ano;

    printf("Para descobrir quantos dias tem o ano correspondente, digite o ano abaixo.");
    scanf("%d", &anual);

    if(anual % 4 == 0 ){
        ano = 366;
    } else {
        ano = 365;
    }

    printf("O ano de %d, tem %d dias.", anual, ano);

    return 0;
}   