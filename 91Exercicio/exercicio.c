// Faça um algoritmo que imprima todos os números pares compreendidos entre 
// 85 e 907. O algoritmo deve também calcular a soma destes valores. 
//Entrada: numero, limite
//processador: repeticao dos numeros multiplos de 7
//Saida: O processador impresso
#define LIMITE = 907
#include <stdio.h>
int main(){
    int numero;

    for(numero = 86; numero <= 907; numero++){
        if(numero % 2 == 0){
            printf("\n %d", numero);
        }

    }
    return 0;
}