// Você deve imprimir os números perfeitos entre 1 e 10000
// Sabe-se que os números perfeitos são aqueles que a soma dos divisores é igual a multiplicação dos mesmos.
// Ex: 6 =  3 x 2 x 1
// 	6 = 3 + 2 + 1
// 	São iguais, logo, 6 é um número perfeito.
#include <stdio.h>
#define LIMITE 10000
int main(){
    int num; // numero testado afim de descobrir se eh perfeito ou nao.
    int numperfeito;
    int numperfeito2; // soma para descobrir se o numero que tem a divisao perfeita eh igual ao numero normal, se tornando assim um numero perfeito
    int divisor; // o divisor que vai aumentando para descobrir se seus divisores, sao mesmo divisores com resto = 0 28= 2, 4, 7, 14

    printf("Este programa vai imprimir todos os numeros perfeitos de 1 a 10000.\n ");
    for(num = 1; num <= 10000; num++){
        numperfeito = 0;
        numperfeito2 = 1;
        for(divisor = 1; divisor <= num / 2; divisor++){
            if(num % divisor == 0){
                numperfeito = divisor + numperfeito;
                numperfeito2 = divisor * numperfeito2;
                
            }
        }
        if(numperfeito == num && numperfeito2 == num){
            printf("%d\n", num);
        }
    }
    return 0;
}