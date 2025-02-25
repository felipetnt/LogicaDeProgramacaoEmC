//  Escreva um algoritmo que calcule os quadrados e cubos dos números de 0 a 10 
// e imprima os valores resultantes no formato de tabela, como segue: 
// Número
//  0  
// 1  
// 2  
// 3  
// 4  
// 5  
// 6  
// 7  
// 8  
// 9  
// 10  
//  Quadrado  
// 0  
// 1  
// 4  
// 9  
// 16  
// 25  
// 36  
// 49  
// 64  
// 81  
// 100  
// Cubo 
// 0 
// 1 
// 8 
// 27 
// 64 
// 125 
// 216 
// 343 
// 512 
// 729 
// 1000

#define LIMITE 10
#include <stdio.h>
int main(){
    int quadrado;
    int numero;
    int cubo;

    for(numero = 1; numero <= LIMITE; numero++){
        quadrado = numero * numero;
        cubo = quadrado * numero;
        
        printf("O quadrado de %d eh %d \n", numero, quadrado );
        printf("O cubo do mesmo numero eh %d \n" , cubo);
    }
    return 0;
}