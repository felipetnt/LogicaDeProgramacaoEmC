// Foi feita uma pesquisa com um grupo de alunos de uma universidade, na qual 
// se perguntou para cada aluno o número de vezes que utilizou o restaurante da 
// universidade no último mês. Construa um algoritmo que determine: 
// a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante; 
// b) O percentual de alunos que utilizaram entre 10 e 15 vezes; 
// c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes. 
// Ex.: 2, 3, 11, 12, 21, 22, 23 =  a) 28%; b) 28%; c) 42

#include <stdio.h>
int main(){
    float percentualDeAlunosTotal;
    float percentualMenosDe10 = 0;
    float contadorMenosDe10 = 0;
    float percentualEntre10E15 = 0;
    float contadorEntre = 0;
    float percentualAcimaDe15 = 0;
    float contadorAcima = 0;
    int aluno = 1;
    int quantidadeVezesRestaurante;

    printf("Informe aqui, quantos alunos tem em seu grupo da universidade: \n");
    scanf("%f", &percentualDeAlunosTotal);

    while(aluno <= percentualDeAlunosTotal){
        printf("Insira aqui, a quantidade de vezes que voce vai ao restaurante de sua faculdade: \n");
        scanf("%d", &quantidadeVezesRestaurante);
        if(quantidadeVezesRestaurante < 10){
            contadorMenosDe10 = contadorMenosDe10 + 1;
        } else {
            if(quantidadeVezesRestaurante >= 10 && quantidadeVezesRestaurante <= 15){
                contadorEntre = contadorEntre + 1;
            } else {
                if(quantidadeVezesRestaurante > 15){
                    contadorAcima = contadorAcima + 1;
                }
            }
        }
        aluno++;
    }
    percentualMenosDe10 = contadorMenosDe10 / percentualDeAlunosTotal;
    percentualEntre10E15 = contadorEntre / percentualDeAlunosTotal;
    percentualAcimaDe15 = contadorAcima/ percentualDeAlunosTotal;

    percentualAcimaDe15 = percentualAcimaDe15 * 100;
    percentualEntre10E15 = percentualEntre10E15 * 100;
    percentualMenosDe10 = percentualMenosDe10 * 100;

    printf("A porcentagem de alunos que vai para o restaurante da universidade menos de 10x eh %.1f porcento \n", percentualMenosDe10);
    printf("A porcentagem de alunos que vai para o restaurante da universidade entre 10x e 15x eh %.1f porcento\n", percentualEntre10E15);
    printf("A porcentagem de alunos que vai para o restaurante da universidade mais de 15x eh %.1f porcento\n", percentualAcimaDe15);
    return 0;
}