/*O cardápio de uma lanchonete é o seguinte: 
Especificação
  Preço unitário
 100 Cachorro quente  
101 Bauru simples   
102 Bauru c/ovo   
103 Hamburger   
104 Cheeseburger   
105 Refrigerante   
           1,10  
1,30  
1,50  
1,10  
1,30  
1,00 
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule 
o valor a ser pago por aquele lanche. Considere que a cada execução somente 
será calculado um item. */
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
        if(codigo == 100 || codigo == 103){
            total = quantidade * 1.1;
        } else {
            if(codigo == 101 || codigo == 104){
                total = quantidade * 1.3;
            } else {
                if(codigo == 102){
                    total = quantidade * 1.5;
                } else {
                    if(codigo == 105){
                        total = quantidade * 1.0;
                    }
                }
            }
        }
    }
    if(aux = 1){
        printf("O valor total da sua compra foi R$%.2f \n", total);
    }
    return 0;
}