/* Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma 
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda 
de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor 
vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 
50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro 
caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório 
contendo nome, valor da venda e comissão de cada um dos corretores. O 
relatório deve mostrar também o total de vendas da empresa. 
Entrada: 
Saida: 
*/
#include <stdio.h>
int main(){

    float valorvendido;
    float comissao;

    printf("Para corretores, qual foi seu valor vendido esse mes? \n")/
    scanf("%f", &valorvendido);

    if(valorvendido > 50000){
        comissao =  valorvendido * 12/100;
        printf("Sua comissao foi de %.1f", comissao);
    } else {
        if(comissao < 50000 && comissao > 30000){
            comissao =  valorvendido * 9.5/100;
            printf("Sua comissao foi de %.1f", comissao);\

        } else {
            comissao =  valorvendido * 7/100;
            printf("Sua comissao foi de %.1f", comissao);
        }

    }
    return 0;
}