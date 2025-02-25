/*Crie o algoritmo Funcionario para calcular o aumento salarial de um empregado. 
Por padrão, o aumento será de 15%. Entretanto, deve ser aplicada uma regra 
diferente para cada faixa salarial. Regras: 
a) se 1.500,00 <= salarioAtual < 1.750,00: aumento igual a 12% 
b) se 1.750,00 <= salarioAtual < 2.000,00: aumento igual a 10% 
c) se 2.000,00 <= salarioAtual < 3.000,00: aumento igual a 7% 
d) se salarioAtual acima de 3.000,00: aumento igual a 5%. */

#include <stdio.h>
int main(){
    float funcionario;
    float novosalario;

    printf("Digite aqui seu salario:");
    scanf("%f", &funcionario);

    if(funcionario >= 1500 && funcionario < 1750){
        novosalario = funcionario * 1.12 ;
    } else {
        if(funcionario >= 1750 && funcionario < 2000){
            novosalario = funcionario * 1.1;
        } else {
            if(funcionario >= 2000 && funcionario < 3000){
                novosalario = funcionario * 1.07;
            } else {
                if(funcionario > 3000){
                novosalario = funcionario * 1.05;
                }
            }
        }
    }
    printf("Seu salario novo eh de R$%.2f", novosalario);
    return 0;
}