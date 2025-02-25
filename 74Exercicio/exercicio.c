/*O programa de uma loja de móveis mostra o seguinte menu na tela de vendas: 
1-Venda a Vista 
2-Venda a Prazo 30 dias 
3-Venda a Prazo 60 dias 
4-Venda a Prazo com 90 dias 
5-Venda com cartão de débito 
6-Venda com cartão de crédito 
Escolha a opção: */

#include <stdio.h>
int main(){

    int tipo;

    printf("Para realizar sua compra, coloque o tipo de pagamento que desja realizar: \n");
    printf(" 1-Venda a Vista \n 2-Venda a Prazo 30 dias\n 3-Venda a Prazo 60 dias\n 4-Venda a Prazo com 90 dias\n 5-Venda com cartão de débito\n 6-Venda com cartão de crédito \n");
    printf("Digite aqui qual sera seu estilo de compra:");
    scanf("%d", &tipo);

    switch (tipo)
    {
    case 1:
        printf("Voce selecionou a compra a vista.");
        break;
    case 2:
        printf("Voce selecionou a compra a prazo de 30 dias");
        break;
    case 3:
        printf("Voce selecionou a compra a prazo de 60 dias.");
        break;
    case 4:
        printf("Voce selecionou a compra a prazo de 90 dias.");
        break;
    case 5:
        printf("Voce selecionou a compra com cartao de debito.");
    case 6:
        printf("Voce selecionou a compra com cartao de credito.");
    
    default:
        printf("Voce nao selecionou uma opcao valida, retorne ao captcha");
        break;
    }
    return 0;
}