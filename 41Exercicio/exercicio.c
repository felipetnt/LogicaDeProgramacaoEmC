/*A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores 
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro 
vendido e mais 5% do valor das vendas. Faça um algoritmo que determine o 
salário total de um vendedor. */
#include <stdio.h>
#define salariominimo 1518
#define fixo 50
int main(){
    int carrosvendidos;
    float salariototal;

    printf("Informe quantos carros foram vendidos este mes: \n");
    scanf("%d", &carrosvendidos);

    salariototal = salariominimo + fixo * carrosvendidos;

    printf("Seu salario minimo e de %.2f reais.", salariototal);

    return 0;


}