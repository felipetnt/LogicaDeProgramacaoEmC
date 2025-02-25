/*Faça um programa, utilizando estrutura de condição, que receba um número 
real, digitado pelo usuário e mostre o menu para selecionar o tipo de cálculo que 
deve ser realizado: 
101-Raiz quadrada 
102-A metade 
103-10% do número 
104-O dobro 
Escolha a opção: */

#include <stdio.h>
//#include <math.h>
int main(){
    float valor;
    int tipo;
    float resultado;

    printf("Afim de fazer calculos, insira o numero desejado: \n");
    scanf("%f", &valor);
    printf("Agora selecione o tipo de calculo que deseja fazer pelo codigo \n 101-Raiz quadrada \n 102-A metade \n 103-10 por cento do número \n 104-O dobro \n Digite o codigo aqui: \n");
    scanf("%d", &tipo);

    switch (tipo)
    {
    case 101:
        resultado = sqrt(valor);
        printf("Seu resultado eh de %.1f", resultado);
        break;
    case 102:
        resultado = valor / 2;
        printf("Seu resultado eh de %.1f", resultado);
        break;
    case 103:
        resultado = valor * 0.1;
        printf("Seu resultado eh de %.1f", resultado);
        break;
    case 104:
        resultado = valor * 2;
        printf("Seu resultado eh de %.1f", resultado);
        break;

    
    default:
        printf("Insira um codigo valido.");
        break;
    }
    return 0;
}