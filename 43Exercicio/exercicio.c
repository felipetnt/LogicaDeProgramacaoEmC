/* Uma empresa irá dar um aumento de salário aos seus funcionários de acordo 
com a categoria de cada empregado. O aumento seguirá a seguinte regra:  
• Funcionários das categorias A, C, F, e H ganharão 10% de aumento sobre o 
salário; 
• Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre 
o salário; 
• Funcionários das categorias K e R ganharão 25% de aumento sobre o salário; 
• Funcionários das categorias L, M, N, O, P, Q e S ganharão 35% de aumento 
sobre o salário; 
• Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento 
sobre o salário. 
Faça um algoritmo que escreva nome, categoria e salário reajustado de cada 
empregado.  */

#include <stdio.h>
int main(){
    char nome[50]; 
    char categoria;
    float novosalario;
    float salarioatual;

    printf("Digite seu nome completo: \n");
    fgets(nome, sizeof(nome), stdin);   
    printf("Digite seu salario atual:\n");
    scanf("%f", &salarioatual );
    getchar();
    printf("Digite sua categoria na empresa:\n");
    scanf("%c", &categoria); 

        // Categorias com 10% de aumento
    if(categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H'){
        novosalario = salarioatual * 1.1; 
        printf("Aqui esta seu salario reajustado: %.2f", novosalario);
        printf("Categoria: %c\n", categoria);
        printf("Salário Atual: R$%.2f\n", salarioatual);
        printf("Novo Salário: R$%.2f\n", novosalario);
    } else { //Categorias com 15% de aumento
        if(categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T') {
            novosalario = salarioatual * 1.15; 
            printf("Aqui esta seu salario reajustado: %.2f", novosalario);
            printf("Categoria: %c\n", categoria);
            printf("Salário Atual: R$%.2f\n", salarioatual);
            printf("Novo salario: R$%.2f\n", novosalario);
        } else { // Categorias com 25% de aumento
            if(categoria == 'K' || categoria == 'R'){
                novosalario = salarioatual * 1.25; 
                printf("Aqui esta seu salario reajustado: %.2f", novosalario);
                printf("Categoria: %c\n", categoria);
                printf("Salário Atual: R$%.2f\n", salarioatual);
                printf("Novo Salário: R$%.2f\n", novosalario);
            } else { // Categorias com 35% de aumento
                if(categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q'|| categoria == 'S'){
                    novosalario = salarioatual * 1.35;
                    printf("Aqui esta seu salario reajustado: %.2f", novosalario);
                    printf("Categoria: %c\n", categoria);
                    printf("Salário Atual: R$%.2f\n", salarioatual);
                    printf("Novo Salário: R$%.2f\n", novosalario);
                    printf("Categoria %c inválida ou sem aumento definido.\n", categoria);
                } else { // Categorias com 50% de aumento
                    if(categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z'){
                        novosalario = salarioatual * 1.5;
                        printf("Aqui esta seu salario reajustado: %.2f", novosalario);
                        printf("Categoria: %c\n", categoria);
                        printf("Salario atual: R$%.2f\n", salarioatual);
                        printf("Novo salário: R$%.2f\n", novosalario);
                    } else { // Categorias indefinidas
                        printf("Categoria %c inválida ou sem aumento definido.\n", categoria);
                    }

                }  

            }

        }

    }
    return 0;
}