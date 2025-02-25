// Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000. 
#define LIMITE = 1000
#include <stdio.h>
int main(){
    int numero;

    for(numero = 1; numero <= 1000; numero++){
        if(numero % 7 == 0){
            printf("\n %d", numero);
        }

    }
    return 0;
}