// Crie um algoritmo que execute as funcionalidades da conta-corrente de uma 
// pessoa. Toda a conta tem um número, uma pessoa vinculada e um saldo. O 
// saldo é atualizado conforme o tipo de movimentação bancária: depósito ou 
// retirada. Se for um depósito, o dinheiro é creditado ao saldo; se for retirada, o 
// dinheiro é debitado do saldo. 

#include <stdio.h>
int main(){
    float contabancaria;
    char opcao[50];
    float deposaq;
    float contafinal;

    printf("Digite aqui quanto tem na sua conta corrente: \n");
    scanf("%f", &contabancaria);
    getchar();
    printf("Agora digite aqui se deseja depositar (Deposito) ou se deseja sacar (Saque) : \n");
    scanf("%s", opcao);
    getchar();

    if(strcmp(opcao, "Deposito") == 0){
        printf("Digite aqui quanto deseja depositar em sua conta de R$%.2f: \n", contabancaria);
        scanf("%f", &deposaq);
        getchar();

        contafinal = contabancaria + deposaq;

        printf("O dinheiro total em sua conta atual eh de R$%.2f: \n", contafinal);
    } else {
        if(strcmp(opcao, "Saque") == 0){
        printf("Digite aqui quanto deseja sacar de sua conta de R$%.2f: \n", contabancaria);
        scanf("%f", &deposaq);
        getchar();

        contafinal = contabancaria - deposaq;

        printf("O dinheiro total em sua conta atual eh de R$%.2f: \n", contafinal);

        } else {
            printf("Sua transacao deu erro, retorne ao captcha e insira valores e instrucoes validas.");
        }
    }
    return 0;
}