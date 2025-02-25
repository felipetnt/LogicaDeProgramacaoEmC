/*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos 
lados de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele 
ou escaleno. Se eles não formarem um triângulo, escrever uma mensagem. 
Antes da elaboração do algoritmo, torna-se necessário a revisão de algumas 
propriedades e definições. 
Propriedade
 – o comprimento de cada lado de um triângulo é menor do que a 
soma dos comprimentos dos outros dois lados. 
Definição 1 - chama-se de triângulo equilátero o que tem os comprimentos dos 
três lados iguais; 
Definição 2 - chama-se de triângulo isóscele o triângulo que tem os 
comprimentos de dois lados iguais; 
Definição 3 - chama-se triângulo escaleno o triângulo que tem os 
comprimentos dos três lados diferentes. */
#include <stdio.h>
int main(){
    int X;
    int Y;
    int Z;

    printf("Afim de construir um triangulo, e classifica-lo, passe os dados dele, qual sua base? \n");
    scanf("%d", &X);
    printf("Qual o tamanho de seu lado 1? \n");
    scanf("%d", &Y);
    printf(" qual tamanho de seu lado 2? \n");
    scanf("%d", &Z);

    if(X > Y + Z || Y > X + Z || Z > X + Y){
        printf("Os valores informados não formam um triangulo!");
    } else {
        if(X == Y && X == Z && Z == Y){
            printf("Os valores formam um triangulo equilatero.");
        } else {
            if(X == Y  || X == Z || Z == Y ){
                printf("Os valores formam um triangulo isoceles.");
            } else {
                printf("Os valores formam um triangulo escaleno. ");
            }
        }
    }
    return 0;
}