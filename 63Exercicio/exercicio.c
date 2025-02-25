/* Um vendedor necessita de um algoritmo que calcule o preço total devido por um 
cliente. O algoritmo deve receber o código de um produto e a quantidade 
comprada e calcular o preço total, usando a tabela abaixo: 
Código do produto
 Preço unitário
          1001  
          1324   
          6548   
          0987   
          7623   
      5,32 
      6,45 
      2,37 
      5,32 
      6,45 */
#include <stdio.h>
int main(){
    float codigo;
    int quantidade;
    float total;
    int aux = 1;
    printf("Por favor, informe o codigo do produto que esta comprando abaixo: \n");
    scanf("%f", &codigo);
    printf("Por favor, informe a quantidade que precisas: \n");
    scanf("%d", &quantidade);

    if(codigo != 100 && codigo != 101 && codigo != 102 && codigo != 103 && codigo != 104 && codigo != 105 ){
        printf("Este produto nao esta a venda!\n");
        aux = 0;
    } else {
        if(codigo == 1001 || codigo == 987){
            total = quantidade * 5.32;
        } else {
            if(codigo == 1324 || codigo == 7623){
                total = quantidade * 6.45;
            } else {
                if(codigo == 6548){
                    total = quantidade * 2.37;
                 
            
                }
            }
        }
    }
    if(aux = 1){
        printf("O valor total da sua compra foi R$%.2f \n", total);
    }
    return 0;
}