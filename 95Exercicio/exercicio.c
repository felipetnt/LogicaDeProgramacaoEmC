// Para uma turma de 45 alunos, construa um algoritmo que determine: 
// a) A idade média dos alunos com menos de 1,70m de altura; 
// b) A altura média dos alunos com mais de 20 anos. 

#define LIMITE 45
#include <stdio.h>
int main(){
    int aluno;
    int idade;
    float altura;
    float alturamediaid = 0;
    float alturamediaal = 0;
    float quantidadeid = 0;
    float quantidadeal = 0;

    for(aluno = 1; aluno <= 2; aluno++){
        printf("Apresente sua idade:");
        scanf("%d", &idade);
        printf("Apresente sua altura:");
        scanf("%f", &altura);

        if(idade>20){
            quantidadeid = quantidadeid + 1;
            alturamediaid = altura + alturamediaid/ quantidadeid;
        }
        if(altura<1.70){
            quantidadeal = quantidadeal + 1;
            alturamediaal = altura + alturamediaal/ quantidadeal;
        }
    }
    printf("A media de altura a partir de alunos com menos de 1.70 eh: %.2f \n", alturamediaal);
    printf("A media de altura de alunos a cima de 20 anos eh: %.2f \n", alturamediaid);
    return 0;
}