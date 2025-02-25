/* Uma sorveteria vende três tipos de picolés. Sabendo-se que o picolé do tipo 1 é 
vendido por R$ 0.50, o do tipo 2 por R$ 0.60 e o do tipo 3 por R$ 0.75, faça um 
algoritmo que, para cada tipo de picolé, mostre a quantidade vendida e o total 
arrecadado. */
#include <stdio.h>
int main(){
    int qtdpicole;
    float totalarrecadado;
    int tiposorvete;

    printf("Escolha o sabor do picole (1,2 ou 3): \n");
    scanf("%d", &tiposorvete);

    printf ("Quantos picoles?");
    scanf("%d", &qtdpicole);

    if(tiposorvete == 1){
        totalarrecadado = 0.5 * qtdpicole;
        printf("Voce comprou %d picoles.", qtdpicole);
        printf("Voce gastou R$%.2f", totalarrecadado);
    } else
        if(tiposorvete == 2){
        totalarrecadado = 0.6 * qtdpicole;
        printf("Voce comprou %d picoles.", qtdpicole);
        printf("Voce gastou R$%.2f", totalarrecadado);
            } else {
            if(tiposorvete == 3){
            totalarrecadado = 0.75 * qtdpicole;
            printf("Voce comprou %d picoles.", qtdpicole);
            printf("Voce gastou R$%.2f", totalarrecadado);
                } else {
                    printf("Este tipo de sabor nao foi encontrado...");
                }
            }
    return 0;
}