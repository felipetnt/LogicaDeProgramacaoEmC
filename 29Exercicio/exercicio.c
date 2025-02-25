/*Admitindo que uma data é lida pelo algoritmo em uma variável inteira, e não em 
uma variável do tipo data, crie um algoritmo que leia uma data no formato 
DDMMAA e imprima essa data no formato AAMMDD, onde: 
• A letra D corresponde a dois algarismos representando o dia; 
• A letra M corresponde a dois algarismos representando o mês; 
• A letra A corresponde aos dois últimos algarismos representando o ano. 
Entrada: DDMMAA
Saida: AAMMDD*/


#include <stdio.h>

int main(){
    int data;//data que o usuario vaI DAR
    int ano;
    int mes;
    int dia;


    printf("Afim de gerar sua data ao contrario, digite sua data no estilo descrito (DDMMAA) substituindo o D pelos dias, o M pelo mes, e o A pelo ano:\n");
    scanf("%d", &data);

    ano = data % 100;
    mes = data / 100 % 100;
    dia = data / 10000;

    printf("\n sua data ao contrario fica exatamente assim: %d%d%d", ano, mes, dia);

 
    return 0;
}