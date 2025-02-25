/*Uma empresa produz três tipos de peças mecânicas: parafusos, porcas e 
arruelas. Têm-se os preços unitários de cada tipo de peça e sabe-se que sobre 
estes preços incidem descontos de 10% para porcas, 20% para parafusos e 30% 
para arruelas. Escreva um algoritmo que calcule o valor total da compra de um 
cliente. Deve ser mostrado o nome do cliente. O número de cada tipo de peça 
que o mesmo comprou, o total de desconto e o total a pagar pela compra. */
#include <stdio.h>
int main(){

    char nome[70];
    int parafusos; //qtde de parafusos
    float precopara;
    int porcas; //qtde de porcas
    float precoporc;
    int arruelas; //qtde de arruelas
    float precoaruel;
    float total; //total da compra sem desconto
    float totaldesc; //total de desconto
    float contafinal;

    printf("Digite seu nome completo:");
    fgets(nome, sizeof(nome), stdin); 

    printf("Quantas porcas quer comprar? \n");
    scanf("%d", &porcas);// 10% de desconto

    printf("Quanto esta o preco das porcas?");
    scanf("%f", &precoporc);

    printf("Quantos parafusos quer comprar? \n");
    scanf("%d", &parafusos);

    printf("Quanto esta o preco dos parafusos?");
    scanf("%f", &precopara);

    printf("Quantas arruelas quer comprar? \n");
    scanf("%d", &arruelas);// 30% de desconto

    printf("Quanto esta o preco das arruelas?");
    scanf("%f", &precoaruel);

    totaldesc = (precoporc * porcas * 0.1) + (precopara * parafusos * 0.2) + (precoaruel * arruelas * 0.3);
    total = precoporc * porcas + precopara * parafusos + arruelas * precoaruel;
    contafinal = total - totaldesc;

    printf("O sr(a) %s \n", nome);
    printf("O senhor comprou %d porcas, %d parafusos e %d arruelas \n", porcas, parafusos, arruelas);
    printf("Seu desconto foi de %.2f\n", totaldesc);
    printf("Sua conta total foi de %.2f", contafinal);

    return 0;
}