/*Um vendedor precisa de um algoritmo que calcule o preço total devido por um 
cliente. O algoritmo deve receber o código de um produto e a quantidade 
comprada e calcular o preço total, usando a tabela abaixo. Mostre uma 
mensagem no caso de código inválido.  
  Código
 Preço Unitário 
'ABCD'  
'XYPK'  
 'KLMP'  
'QRST'  
R$  
R$  
R$ 
R$  
5,30  
6,00  
3,20  
2,50 */

#include <stdio.h>
int main(){
    float total;
    char codigo[10];
    int quantidade;
    int aux = 1;

    printf("Digite aqui, o codigo do produto que esta comprando: \n");
    scanf("%s", codigo);
    getchar();
    printf("Digite aqui, a quantidade desejada: \n");
    scanf("%d", &quantidade);

    if(codigo != "ABCD" && codigo != "XYPK" && codigo != "KLMP" && codigo != "QRST"){
        printf("Não existe esse produto.");
        aux = 0;
    } else {
        if(strcmp("B", "A") > 0){
        total = quantidade * 5.30;
        } else {
            if(strcmp(codigo, "XYPK") == 0){
            total = quantidade * 6;
            } else {
                if(strcmp(codigo, "KLMP") == 0){
                total = quantidade * 3.20;
                } else {
                    if(strcmp(codigo, "QRST") == 0){
                    total = quantidade * 2.50;
                    }
                }
            }
        }
    }
    if(aux = 1){
        printf("O preço total gasto na sua compra foi de R$%.2f", total);
    }

    return 0;
}