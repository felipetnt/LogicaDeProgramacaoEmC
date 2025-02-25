// Faça um algoritmo que leia um conjunto de dados numéricos (X) e imprima o 
// maior (Maximo) dentre eles. Admita que o valor 9999 é utilizado como sentinela. 
// Ex.: 1, 2, 3 => Maior=3
//Entrada:
//Processador:
//Saida:  
#include <stdio.h>
int main(){
    int x; // limite do programa
    int n = 1;
    printf("Digite abaixo, a quantidade de numeros que serao somados em sequencia, e terao sua media em sequencia: \n");
    scanf("%d", &x);
    if(x <= 9999){
        while(n <= x){
            n++;
        }
        n = n - 1;
        printf("Aqui esta o maior numero entre eles: %d \n", n);
    } else {
        printf("Insira um numero menor que 9999");
    }
    return 0;
}