// Faça um algoritmo que leia um conjunto de números (X) e imprima a 
// quantidade de números pares (QPares) e a quantidade de números impares 
// (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para fim de 
// leitura. 
// Ex.: 1,2,3,4,5 => Pares=2  Impares=3 
//Entrada: limite de numeros x
//Processador: separar os numeros pares dos impares e conta-los.
//Saida: imprimir a quantidade


#include <stdio.h>
int main(){
    int n = 1;
    int contagemPar = 0;
    int contagemImpar = 0;
        do{
            printf("Digite abaixo, a quantidade de numeros que serao somados em sequencia, e terao sua media em sequencia: (Digite 9999 para parar o programa)\n");
            scanf("%d", &n);
            if(n % 2 == 0){
                contagemPar++;
            } else {
                if(n % 2 != 0){
                    contagemImpar++;
                }
            }
        } while (n == 9999);
        printf("Aqui esta a quantidade de impares que o usario inseriu foi: %d \n", contagemImpar);
        printf("Aqui esta a quantidade de pares que o usario inseriu foi: %d \n", contagemPar);
    
    return 0;
}