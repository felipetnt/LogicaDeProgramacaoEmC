/*Suponha que uma escola utilize, como código de matrícula, um número inteiro 
no formato AASDDD, onde: 
• Os dois primeiros dígitos, representados pela letra A, são os dois últimos 
algarismos do ano da matrícula; 
• O terceiro dígito, representado pela letra S, vale 1 ou 2, conforme o aluno 
tenha se matriculado no 1º ou 2º semestre; 
• Os quatro últimos dígitos, representados pela letra D, correspondem à ordem 
da matrícula do aluno, no semestre e no ano em questão. 
Crie um algoritmo que leia o número de matrícula de um aluno e imprima o ano 
e o semestre em que ele foi matriculado.  
Entrada: AASDDD
Saida: AA, S*/

#include <stdio.h>

int main(){
    int AASDDD; //matricula toda.
    int AA;//variavel
    int S; //variavel
    int AAS;//variavel auxiliar

    



    printf("Digite aqui sua matricula para que possamos te dar seus dados: \n");
    scanf("%d", &AASDDD);

    //1 parte!!!
    AAS = AASDDD / 1000;
    S = AAS % 10;
    AA = AAS / 10;
    

    printf("Com base na sua matricula voce nasceu na decada de %d \n", AA);
    printf("E começou no %d semestre", S);
 
    return 0;
}