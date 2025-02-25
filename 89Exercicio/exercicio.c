// Construa um Algoritmo que, para um grupo de 50 valores inteiros, determine: 
// a) A soma dos números positivos; 
// b) A quantidade de valores negativos; 

#define LIMITE 5  // constante
#include <stdio.h> // importar biblioteca
int main(){
    int i; //declarar variavel

    int valor;
    int soma = 0; //inicializar variavel
    int quantidade = 0;
    for (i = 1; i <= LIMITE; i++) // repetição que sabe o inicio e o fim
    {
        printf("\nInformer o valor (%d): ",i); // imprimir para o usuário
        scanf("%d",&valor); // ler um tipo específico do usuário
        if(valor > 0){ // condicional - if
            soma = soma + valor; //acumular valor
        }else {
            if(valor < 0){
                quantidade = quantidade + 1; //contar valor
            }
        }
    }
    printf("\nA soma dos valores positivos: %d",soma); // imprimir
    printf("\nA qtd dos valores negativos: %d",quantidade);
    
  return 0;
}