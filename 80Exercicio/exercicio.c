// Construa um algoritmo que leia um número inteiro de 1 a 7 e informe o dia da 
// semana correspondente, sendo domingo o dia de número 1. Se o número não 
// corresponder a um dia da semana, mostre uma mensagem de erro. 

#include <stdio.h>
int main(){
    int diadasemana;

    printf("Digite aqui o numero do dia da semana, e eu te digo o dia da semana q ele corresponde.");
    scanf("%d", &diadasemana);

    switch (diadasemana)
    {
        case 1:{
            printf("Hoje eh domingo.");
            break;
        }
        case 2:{
            printf("Hoje eh segunda.");
            break;
        }
        case 3:{
            printf("Hoje eh terca.");
            break;
        }
        case 4:{
            printf("Hoje eh quarta.");
            break;
        }
        case 5:{
            printf("Hoje eh quinta.");
           break;
        }
        case 6:{
            printf("Hoje eh sexta.");
            break;
        }
        case 7:{
            printf("Hoje eh sabado.");
            break;
        }
        default:
            printf("Insira um numero de dia valido.");
            break;
    }
    return 0;
}