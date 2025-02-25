//  Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao 
// usuário a quantidade de funcionários, o nome e o salário de cada funcionário e
// devolvendo a média, o salário mais alto e o salário mais baixo.

#include <stdio.h>
int main(){

    int quantidade = 0;
    char nome[50];
    float salario = 0;
    int funcionario;
    float maiorsalario = 0;
    float menorsalario = 0;
    float soma = 0;
    float media = 0;

    printf("Insira aqui a quantidade de funcionarios. \n");
    scanf("%d", &quantidade);
    getchar();

    for(funcionario = 1; funcionario <= quantidade; funcionario++){

        printf("Insira aqui seu nome completo: \n");
        fgets(nome, sizeof(nome), stdin);
        printf("Insira aqui seu salario. \n");
        scanf("%f", &salario);
        getchar();

        soma = soma + salario;

        if(salario > maiorsalario){
            maiorsalario = salario;
        } else {
           if(salario < menorsalario){
            menorsalario = salario;
           }
        }  
    }
    media =  salario / quantidade;
    printf("Media de salarios eh : R$%2f", media);
    printf("O maior salario eh R$%2f", maiorsalario);
    printf("O menor salario eh: R$%.2f", menorsalario);
    return 0;
}