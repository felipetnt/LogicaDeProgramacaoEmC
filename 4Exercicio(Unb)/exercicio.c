/*Desenvolver um algoritmo que leia a nome e o
 sexo de uma pessoa, apresentando como saída
 uma das seguintes mensagens de tratamento
 formal: “Ilmo. Sr.”, para o sexo masculino ou
 “Ilma. Sra.” para o sexo feminino, acrescentando
 o nome informado pelo usuário em seguida.
 Observe o exemplo de um resultado suposto:
 Ilmo Sr. AngeloAugusto*/

#include <stdio.h>
int main()
{
    char nome[100] = "";
    int sexualidade;

    printf("Digite seu primeiro nome abaixo: \n");
    scanf("%s", nome);

    printf("Digite sua sexualidade (para masculino, digite 1 e para feminino, digite 2) abaixo: \n");
    scanf("%d", &sexualidade);

    if (sexualidade == 1){
        printf("Ilmo Sr. %s", nome);
    }
    else{
        if (sexualidade == 2){

            printf("Ilma Sra. %s", nome);
        } else {
            printf("Sexualidade inexistente.");
        }
    }
    return 0;
}