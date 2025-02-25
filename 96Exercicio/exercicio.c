//  Escreva um algoritmo que calcule o produto dos inteiros ímpares de 1 a 15 e, 
// então, exiba os resultados. 
#define LIMITE 15
#include <stdio.h>
int main(){
    int numeros;
    int produtonumeros = 1;

    for(numeros = 1; numeros <= LIMITE; numeros++){
        if(numeros % 2 != 0){
            produtonumeros = numeros * produtonumeros;
        }
    }
    printf("O produto dos numeros impares de 1 a 15 eh : %d", produtonumeros);
    return 0;
}