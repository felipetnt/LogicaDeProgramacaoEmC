// Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e 
// escreve o valor de E. 
//         E
//  = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N! 

#include <stdio.h>
int main(){
    int numerador = 1;
    float denominador = 2;
    float denominadortodo = 1;
    float fracao;
    int limite;
    float e = 1;
    printf("Insira o valor do limite do denominador para satisfazer E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N! ");
    scanf("%d", &limite);
    do{
        numerador = 1;
        for(; denominador >= 2; denominador--){
            denominadortodo = denominadortodo * denominador;
        }
        denominador = denominador +1;

        fracao = numerador / denominadortodo;
        e = e + fracao;
    }while(denominadortodo<=limite);
    printf("O valor de E vale: %.1f", e);
    return 0;
}