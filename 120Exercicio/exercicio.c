// Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os 
// dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe: 
// a) a média de salário do grupo; 
// b) a maior e a menor idade do grupo; 
// c) a quantidade de mulheres com salário até R$100,00. 
// Encerre a entrada de dados quando for digitada uma idade negativa. 

#include <stdio.h>
#include <string.h>
int main(){
    int idade;
    float salario;
    char sexo;
    float soma;
    float salariomedio;
    int contagem = 0;
    int maioridade = 0;
    int contagemMulher100;
    int menoridade = 0;

    while(idade > 0){
        printf("Agora digite aqui sua idade:\n");
        scanf("%d", &idade);
        getchar();
        if(idade > 0){
            printf("Digite aqui sua sexualidade, M - Masculino e F - Feminino \n");
            scanf("%c", &sexo);
            getchar();
            printf("Quanto eh seu salario:\n");
            scanf("%f", &salario);
            getchar();

            soma = soma + salario;
            contagem++;
            salariomedio = soma / contagem;

            if(idade > maioridade){
                maioridade = idade;
            }
            if(idade < menoridade){
                menoridade = idade;
            }
            if(sexo == 'F' && salario < 100){
                contagemMulher100 = contagemMulher100 + 1;
            }
        }

    }
    printf("O salario medio da empresa eh: R$%.2f \n", salariomedio);
    printf("A maior idade do grupo eh %d \n", maioridade);
    printf("A menor idade do grupo eh %d \n", menoridade);
    printf("A quantidade de mulheres com um salario de menos de 100 reais eh %d", contagemMulher100);
    return 0;
}