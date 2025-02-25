// Faça um programa que receba o valor da venda, escolha a condição de 
// pagamento no menu e mostre o total da venda final conforme condições a seguir: 
// Venda a Vista - desconto de 10% 
// Venda a Prazo 30 dias - desconto de 5% 
// Venda a Prazo 60 dias - mesmo preço 
// Venda a Prazo 90 dias - acréscimo de 5% 
// Venda com cartão de débito - desconto de 8% 
// Venda com cartão de crédito - desconto de 7% .
#include <stdio.h>
int main(){
    char estilo[50];
    int dias;
    float valor;
    float vf;
    char estilocard[50];
    

    printf("Ao ter realizado a compra, voce ganha um desconto ou acrescimo dependendo do estilo de sua compra (Prazo, AVista ou Cartao). Digite aqui qual foi o estilo:\n ");
    scanf("%s", estilo);
    getchar();
    printf("Agora digite aqui o preco do valor da compra: \n");
    scanf("%f", &valor);

    if(strcmp(estilo, "Prazo") == 0){
        printf("Agora digite aqui qual o prazo em dias (30, 60, 90) \n");
        scanf("%d", &dias);
        
        switch (dias)
        {
        case 30:
            printf("Voce  recebeu um desconto de 5 por cento!");
            vf = valor * 0.95;
            printf("Seu valor final de compra ficou em: R$%.2f", vf);
            break;
        case 60:
            printf("Sua compra se manteve o mesmo preco.");
            printf("Seu valor final de compra ficou em: R$%.2f", valor);
            break;
        case 90:
            printf("Voce  recebeu um acrescimo de 5 por cento!");
            vf = valor * 1.05;
            printf("Seu valor final de compra ficou em: R$%.2f", vf);
            break;
        }
    } else {

        if( strcmp(estilo,"AVista")==0 ){
            printf("Voce  recebeu um desconto de 10 por cento!");
            vf = valor * 0.90;
            printf("Seu valor final de compra ficou em: R$%.2f", vf);
        } else {
           if(strcmp(estilo, "Cartao")==0 ){
            printf("Agora digite aqui qual o tipo do cartao (Debito e Credito) \n");
            scanf("%s", estilocard); 
            getchar();
                if(strcmp(estilocard, "Credito")==0){
                    printf("Voce recebeu 7 por cento de desconto em sua compra.");
                    vf = valor * 0.93;
                } else {
                    if(strcmp(estilocard, "Debito")==0){
                        printf("Voce recebeu 8 por cento de desconto em sua compra.");
                        vf = valor * 0.92;
                    } else {
                        printf("O tipo de compra eh invalido, insira outro.");
                    }
                }        
           }
        }
    }
    return 0;
}