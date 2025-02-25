/*Um banco concederá um crédito especial aos seus clientes, variável com o saldo 
médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e 
calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem 
informando o saldo médio e o valor do crédito. 
Saldo médio
 Percentual
 de 0 a 200   
de 201 a 400   
de 401 a 600   
acima de 601   
nenhum crédito 
20% do valor do saldo médio 
30% do valor do saldo médio 
40% do valor do saldo médio */

#include <stdio.h>
int main(){
    float saldomedio;
    float valor;
    int aux;
    aux = 1;
    printf("Digite aqui o saldo medio da sua conta bancaria:\n");
    scanf("%f", &saldomedio);

    if(saldomedio <= 200 && saldomedio >= 0){
        printf("Não tem direito a nenhum credito.");
        aux = 0;
    } else {
        if(saldomedio >= 201 && saldomedio <= 400){
            valor = saldomedio * 0.2;
        } else {
            if(saldomedio >= 401 && saldomedio <= 600){
            valor = saldomedio * 0.3;  
            } else {
                if(saldomedio >= 601){
                valor = saldomedio * 0.4;
                }
            }
        }
    }
    if(aux == 1){
        printf("Seu valor de credito disponivel eh R$%.2f", valor);
    }
    return 0;
}