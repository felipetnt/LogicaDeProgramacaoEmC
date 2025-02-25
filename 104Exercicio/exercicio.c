// Sem utilizar a operação de multiplicação, escreva um programa que multiplique 
// dois números inteiros. Por exemplo: 2 * 2 = 2 + 2. 
#include <stdio.h>
int main(){
    int i;
    int multiplicador;
    int aux;
    int soma = 0;

    printf("Insira o numero o qual sera o alvo da multiplicacao: \n");
    scanf("%d", &i);
    printf("Insira o numero o qual multiplicara o outro numero: \n");
    scanf("%d", &multiplicador);
    for (aux = 1; aux < multiplicador; aux++){
        if(soma != 0){
            soma = i + soma;
        } else {
            soma = i + i;
        }
    }

    printf("Aqui esta o produto de sua multiplicacao: %d", soma);
    return 0;
}