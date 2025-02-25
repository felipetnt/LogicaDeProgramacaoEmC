// Faça um algoritmo que calcule a média de salários de uma empresa, pedindo 
// ao usuário o nome dos funcionários e os salários e devolvendo a média, o salário 
// mais alto e o salário mais baixo. Use nome = “fim” para encerrar a leitura. 
#include <stdio.h>
#include <string.h>
int main(){
    char nome[50];
    float salario;
    float somaSalario = 0;
    float mediaSalario;
    float menorSalario = 1;
    float maiorSalario = 1;
    int contagemsalario = 0;


    do{
        printf("Digite abaixo seu nome abaixo: (Digite fim caso queira que o programa acabe)\n");

        fgets(nome, sizeof(nome), stdin); 
        nome[strcspn(nome, "\n")] = 0;
        if(strcmp(nome, "fim") != 0){
            printf("Agora digite aqui seu salario na empresa: \n");
            scanf("%f", &salario);
            getchar();
            somaSalario = somaSalario + salario;
            contagemsalario++;
            mediaSalario = somaSalario / contagemsalario;
            if(salario > maiorSalario){
                maiorSalario = salario;
            } else {
                if(salario < menorSalario){
                    menorSalario = salario;
                }
            }
        }
    }while(strcmp(nome, "fim") != 0);
    printf("A media dos salarios da empresa eh : R$%.2f", mediaSalario);
    printf("O maior salario da empresa eh : R$%.2f", maiorSalario);
    printf("O menor salario da empresa eh : R$%.2f", menorSalario);
    return 0;
}