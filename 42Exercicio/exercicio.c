/*Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se 
nome, preço e percentual de desconto. Faça um algoritmo que imprima nome, 
preço e preço com desconto de cada artigo e o total a pagar.*/

#include <stdio.h>
int main(){
    char nome1[20];
    float preco1;
    float desc1;
    char nome2[20];
    float preco2;
    float desc2;
    char nome3[20];
    float preco3;
    float desc3;
    char nome4[20];
    float preco4;
    float desc4;
    float totaldesc1;
    float totaldesc2;
    float totaldesc3;
    float totaldesc4;
    float total;

    printf("Insira o nome do 1 artigo:\n");
    scanf("%s", nome1);
    printf("Insira o preco do 1 artigo:\n");
    scanf("%f", &preco1);
    printf("Insira o percentual de desconto do 1 artigo:\n");
    scanf("%f", &desc1);

    printf("Insira o nome do 2 artigo:\n");
    scanf("%s", nome2);
    printf("Insira o preco do 2 artigo:\n");
    scanf("%f", &preco2);
    printf("Insira o percentual de desconto do 2 artigo:\n");
    scanf("%f", &desc2);

    printf("Insira o nome do 3 artigo:\n");
    scanf("%s", nome3);
    printf("Insira o preco do 3 artigo:\n");
    scanf("%f", &preco3);
    printf("Insira o percentual de desconto do 13 artigo:\n");
    scanf("%f", &desc3);

    printf("Insira o nome do 4 artigo:\n");
    scanf("%s", nome4);
    printf("Insira o preco do 4 artigo:\n");
    scanf("%f", &preco4);
    printf("Insira o percentual de desconto do 4 artigo:\n");
    scanf("%f", &desc4);

    totaldesc1 = preco1 * (desc1 /100);
    totaldesc2 = preco2 * (desc2 /100);
    totaldesc3 = preco3 * (desc3 /100);
    totaldesc4 = preco4 * (desc4 /100);

    total = (preco1 - totaldesc1) + (preco2 - totaldesc2) + (preco3 - totaldesc3) + (preco4 - totaldesc4);

    printf("O total de desconto do artigo nomeado como %s, com preco R$%.2f foi R$%.2f \n", nome2, preco1, totaldesc1);
    printf("O total de desconto do artigo nomeado como %s, com preco R$%.2f foi R$%.2f \n", nome2, preco2, totaldesc2);
    printf("O total de desconto do artigo nomeado como %s, com preco R$%.2f foi R$%.2f \n", nome3, preco3, totaldesc3);
    printf("O total de desconto do artigo nomeado como %s, com preco R$%.2f foi R$%.2f \n", nome4, preco4, totaldesc4);

    printf("O total da conta foi R$%.2f", total);
    return 0;
}