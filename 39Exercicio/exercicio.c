/*Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais. 
Considerando que alguém está pagando uma compra, escreva um algoritmo que 
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre 
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota 
do troco. Suponha que o sistema monetário não utilize moedas.
Entrada: Compras
Saida: Qtde. Notas 1,10,100, troco, minimo de notas impressas */
#include <stdio.h>
int main(){

    int compras;
    int troco;
    int valorpg;
    int qtdnotas1;
    int qtdnotas10;
    int qtdnotas100;

    printf("Quanto voce gastou nas compras hoje? Digite aqui: \n");
    scanf("%d", &compras);
    printf("Qual foi seu valor pago, digite aqui: \n");
    scanf("%d", &valorpg);

    troco = valorpg - compras;

    if(troco < 100 ){
        qtdnotas10 = troco / 10;
        qtdnotas1 = troco % 10;
        printf("A quantidade de notas de 10 que vai utilizar sao : %d \n", qtdnotas10);
        printf("A quantidade de notas de 1 que vai utilizar sao : %d \n", qtdnotas1);
        printf("O total pago foi: %d \n", valorpg);
        printf("A conta deu: %d \n" , compras);
        printf("O troco foi : %d \n", troco);
        


    } else {
        if(troco > 100){
            qtdnotas100 = troco / 100;
            qtdnotas10 = troco / 10 % 10;
            qtdnotas1 = troco % 100;
            printf("A quantidade de notas de 100 que vai utilizar sao : %d \n", qtdnotas100);
            printf("A quantidade de notas de 10 que vai utilizar sao : %d \n", qtdnotas10);
            printf("A quantidade de notas de 1 que vai utilizar sao : %d \n", qtdnotas1);
            printf("O total pago foi: %d\n", valorpg);
            printf("A conta deu: %d\n", compras);
            printf("O troco foi : %d \n", troco);
        
        }
        

    }

    return 0;

}