//     Faça um algoritmo que leia informações de alunos (Matricula, Nota1, Nota2 , 
//     Nota3) com o fim das informações indicado por Matricula = 9999 . Para cada 
//     aluno deve ser calculada a média final de acordo com a seguinte fórmula: 
//     Média final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9 
//     Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula, 
//     Média Final e a mensagem "APROVADO" ; se a média final for inferior a 5, o 
//     algoritmo deve mostrar Matricula, Média Final e a mensagem "REPROVADO". 
//     Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e 
//     o total de reprovado...

#include <stdio.h>
int main(){
    float nota1;
    float nota2;
    float nota3;
    int matricula = 1;
    float mediaFinal;
    int contagemAlunos = 0;
    int contagemReprovados = 0;
    int contagemAprovados = 0;

    while(matricula != 9999){
        printf("Insira aqui sua matricula! E em seguida suas notas das 3 primeiras provas.\n");
        scanf("%d", &matricula);
        if(matricula != 9999){
            contagemAlunos++;
            printf("Agora insira sua nota da primeira prova: \n");
            scanf("%f", &nota1);
            printf("Agora insira sua nota da segunda prova: \n");
            scanf("%f", &nota2);
            printf("Agora insira sua nota da terceira prova: \n");
            scanf("%f", &nota3);
            mediaFinal = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4)) / 9;
            if(mediaFinal > 6){
                contagemAprovados++;
                printf("Matricula do aluno: %d\n", matricula);
                printf("Media final: %.1f", mediaFinal);
                printf("Resultado: Aprovado(a)");
            } else {
                contagemReprovados++;
                printf("Matricula do aluno: %d\n", matricula);
                printf("Media final: %.1f", mediaFinal);
                printf("Resultado: Reprovado(a)");
            }
        }
    }
    printf("Quantidade de alunos totais: %d", contagemAlunos);
    printf("Quantidade de alunos aprovados: %d", contagemAprovados);
    printf("Quantidade de alunos reprovados: %d", contagemReprovados);
    return 0;
}