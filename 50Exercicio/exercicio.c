/*Suponha que o conceito de um aluno seja determinado em função da sua nota. 
Suponha, também, que esta nota seja um valor inteiro na faixa de 0 a 100, 
conforme a seguinte faixa: 
 Nota
 Conceito
 0 a 49  
50 a 64 
65 a 84 
85 a 100 
Insuficiente 
Regular 
Bom 
Ótimo 
Crie um algoritmo que apresente o conceito e a nota do aluno. */

#include <stdio.h>
int main(){

    float nota;

    printf("Imprima aqui sua nota: \n");
    scanf("%f", &nota);

    if(nota < 0 || nota > 100){
        printf("Nao ha nota valida, volte ao captcha e insira a nota novamente.");
    } else {
        if(nota<= 49 && nota >= 0){
            printf("Sua avaliaçao foi Insulficiente.");
        } else {
            if(nota<= 64 && nota >= 50){
                printf("Sua avaliaçao foi Regular.");
            } else {
                if(nota>= 65 && nota <= 84){
                    printf("Sua avaliaçao foi Bom.");                    
                } else {
                    printf("Sua avaliaçao foi Otimo.");
                }
            }
        }
    }
    return 0;
}