// Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 
// metros e cresce 3 centímetros por ano. Construa um algoritmo que calcule e 
// imprima quantos anos serão necessários para que Zé seja maior que Chico.
//Entrada: 

#include <stdio.h>
int main(){
    float alturaChico = 1.50;
    float alturaZe = 1.10;
    int contagem = 0;

    while(alturaZe <= alturaChico){
        contagem = contagem + 1;
        alturaChico = alturaChico + 0.02;
        alturaZe = alturaZe + 0.03;
    }
    printf("O numeo de anos que ze passa chico sao %d anos", contagem);
    return 0;
}