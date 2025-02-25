// Faça um algoritmo que leia o número de andares de um prédio e, a seguir, para 
// cada andar do prédio, leia o número de pessoas que entraram e saíram do 
// elevador. 
// Considere que o elevador está vazio e está subindo, os dados se referem a 
// apenas uma “subida” do elevador e que o número de pessoas dentro do 
// elevador sempre será maior ou igual a 0. 
// Se o número de pessoas, após a entrada e saída for maior que 15, deve ser 
// mostrada a mensagem “EXCESSO DE PASSAGEIROS . DEVEM SAIR" em 
// seguida, o número de pessoas que devem sair do elevador, de modo que seja 
// obedecido o limite de 15 passageiros. 
// Após a entrada de pessoas no último andar o algoritmo deve mostrar quantas 
// pessoas irão descer. 
#include <stdio.h>
#define LIMITE 15
int main(){
    int passageiros = 0;
    int adicao;
    int subtracao;
    int i = 0;
    int andares;
    printf("Insira a quantidade de andares que tem o predio: \n");
    scanf("%d", &andares);
    do{
        i++;
        if(i < andares){
            printf("O elevador subiu de andar, quantas pessoas entram?\n");
            scanf("%d", &adicao);
            printf("Quantas descem?\n");
            scanf("%d", &subtracao);
            passageiros = passageiros + adicao;
            passageiros = passageiros - subtracao;
            if(passageiros > 15){
                printf("EXCESSO DE PASSAGEIROS, DEVEM SAIR %d PESSOAS", passageiros - 15);
            }
        } else {
            printf("Todos os %d irao descer do ultimo andar.", passageiros);
        }
    }while(passageiros <= 15 && i < andares);
    return 0;
}