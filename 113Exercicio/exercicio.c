// Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e 
// apresente o nome e peso da mais pesada e o nome e altura da mais alta. #include <stdio.h>
#include <stdio.h>
int main(){
    char nome1[50];
    char nome2[50];
    float altura1;
    float altura2;
    printf("Para descobrir quem tem a maior altura entre vc e seu amigo(a) abaixo responda: \n");
    printf("Digite aqui seu nome\n");
    getchar();
    fgets(nome1, sizeof(nome1), stdin);
    printf("Digite aqui sua altura\n");
    scanf("%f", &altura1);
    getchar();
    printf("Digite aqui seu nome\n");
    fgets(nome2, sizeof(nome2), stdin);
    printf("Digite aqui sua altura\n");
    scanf("%f", &altura2);
    getchar();

    if(altura1 > altura2){
        printf("O(a) %s eh maior, possuindo de altura %.2f", nome1, altura1);
    } else {
        printf("O(a) %s eh maior, possuindo de altura %.2f", nome2, altura2);
    }
    return 0;
}