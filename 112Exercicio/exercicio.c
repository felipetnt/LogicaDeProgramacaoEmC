// Construa um algoritmo que, para a progressão geométrica 3; 9; 27; 81; ...; 
// 6561, determine a soma de seus termos. Construa o algoritmo de maneira a não 
// utilizar a fórmula de soma dos termos. Faça com que o computador gere cada 
// um dos termos a ser somado. 
// Ex.: 3; 9; 27; 81; 243; 729; 2187; 6561  => 9840 
//Entrada: A quantidade dos termos somados.
//Processador: PG
//Saida: Soma dos termos da pg.

#include <stdio.h>
int main(){
    int soma = 0;
    int contagemPg = 1;
    int pg = 1;
    int limitePg;

    printf("Quantos numeros da pg de 3, voce deseja somar? \n");
    scanf("%d", &limitePg);
    while(contagemPg <= limitePg){
        pg = pg * 3;
        contagemPg = contagemPg + 1;
        soma = pg + soma;
    }

    printf("A soma de sua pg foi %d", soma);

    return 0;
}