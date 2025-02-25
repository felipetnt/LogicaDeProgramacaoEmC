/* O sistema de avaliação de determinada disciplina, é composto por três provas. A 
primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Faça 
um algoritmo para calcular a média final de um aluno desta disciplina. */
#include <stdio.h>
int main(){

float nota1;
float nota2;
float nota3;
float mediaf;

printf("Insira sua nota do primeiro exame: \n");
scanf("%f", &nota1);

printf("Insira sua nota do segundo exame: \n");
scanf("%f", &nota2);

printf("Insira sua nota do terceiro exame: \n");
scanf("%f", &nota3);

mediaf = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) /10 ;

printf("Sua media final nesta disciplina eh: %.1f ", mediaf);
return 0;

}