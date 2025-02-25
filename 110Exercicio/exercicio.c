// Faça um algoritmo que calcule e imprime a soma dos inteiros de 1 a 10. Utilize 
// as estruturas ENQUANTO-FACA / REPITA-FACA para fazer um laço com as 
// instruções de cálculo e incremento. O laço deve terminar quando o valor de x se 
// tornar 11. 
//Entrada: variaveis n = 
//Processador: n++
//Saida: N = 11, e o programa parando de repetir
#include <stdio.h>
int main(){
    int n = 1;
    while(n <= 10 ){
        printf("%d \n", n);
        n++;
    }
    return 0;
}