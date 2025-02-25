/*Escrever um algoritmo que determine se um
 número inteiro qualquer é PAR ou IMPAR.
Entrada: Numero inteiro
Processador: If, par ou impar
Saida, par ou impar*/

#include <stdio.h>
int main(){
    int num;
    printf("Afim de descobrir se seu numero eh par ou impar, digite-o aqui abaixo: \n");
    scanf("%d", &num);

    if(0 == num % 2){

        printf("Seu numero eh par!");

    } else {

        printf("Seu numero eh impar");
    }

    return 0;
}