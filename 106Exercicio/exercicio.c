// Faça um algoritmo que leia um conjunto de números (X) e imprima sua soma 
// (Soma) e sua média (Media). Admita que o valor 9999 é utilizado como sentinela 
// para fim de leitura. 
// Ex.: 1, 2, 3 => Soma=6  Media=2 
//Entrada:  X - informado pelo usario.
//Processador: A soma de todos os numeros, e media entre eles (com o while).
//Saida: Impressao da media e a soma.
#include <stdio.h>
int main(){
    int x; // limite do programa
    int soma = 0;
    int media = 0;
    int contador = 1;
    int n = 1;
    printf("Digite abaixo, a quantidade de numeros que serao somados em sequencia, e terao sua media em sequencia: \n");
    scanf("%d", &x);
    if(x <= 9999){
        while(n <= x){
            soma = soma + n;
            media = soma / contador;
            n++;
            contador++;
        }
        printf("Aqui esta a soma: %d \n", soma);
        printf("Aqui esta a media: %d\n", media);
    } else {
        printf("Insira um numero menor que 9999");
    }
    return 0;
}