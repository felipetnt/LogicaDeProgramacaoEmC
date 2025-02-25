//Escreva um algoritmo que leia um número n (número de termos de uma 
// progressão aritmética), a1 (o primeiro termo da progressão) e r (a razão da 
//     progressão) e escreva os n termos desta progressão, bem como a soma dos 
//     elementos.

#include <stdio.h>
int main(){
    int n; //quantidade de termos em uma pa
    int a1;//primeiro termo
    int r; // razao da pa
    int contador = 0; // contador da pa
    int soma = 0;

    printf("Insira aqui o numero de termos que deseja em sua progressao aritmetica");
    scanf("%d", &n);
    printf("Insira aqui o primeiro termo da sua progressao aritmetica");
    scanf("%d", &a1);
    printf("Insira aqui a razao de sua pa progressao aritmetica");
    scanf("%d", &r);

    while(contador <= n){
        contador++;
        a1 = a1 + r;
        soma = soma + a1;
        printf("%d\n", a1);
    }
    printf("A soma eh %d", soma);
    
    return 0;
}