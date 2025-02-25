// Faça um algoritmo que receba uma data no formato DDMMAAAA e escreva qual 
// a estação do ano correspondente (Primavera, Verão, Outono, Inverno). 
#include <stdio.h>

int main(){
    int DDMMAAAA; //data toda
    int MM; //variavel do mes
    int DD;//variavel do dia
    int DDMM; //variavel auxioliar
    printf("Escreva uma data no estilo DDMMAAAA (D = Dia, M = Mes, A= Ano), para descobrir em qual estacao do ano esta. \n");
    scanf("%d", &DDMMAAAA);

    //1 parte!!!
    DDMM = DDMMAAAA / 10000;
    DD = DDMM /100;
    MM = DDMM % 100;

    if( DD > 21 && MM == 12  || MM < 3 || DD <= 20 && MM == 3 ){
        printf("Voce esta no verao!");
    } else {
        if( MM > 3 && MM < 6 || MM == 3 && DD > 20 || DD < 22 && MM == 6){
            printf("Voce esta no outono!");
        } else {
            if( MM > 6 && MM < 9|| MM == 6 && DD > 20 || DD < 22 && MM == 9){
                printf("Voce esta no inverno!");
            } else {
                if( MM > 9 && MM < 12|| MM == 9 && DD > 21 || DD < 22 && MM == 12){
                    printf("Voce esta na primavera!");
                } else {
                    printf("Data invalida.");
                }
            }
        }
    }
 
    return 0;
}