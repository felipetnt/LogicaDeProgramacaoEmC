// Foi realizada uma pesquisa de algumas características físicas da população de 
// uma certa região, a qual coletaram os seguintes dados referentes a cada 
// habitante para serem analisados:  - sexo (masculino e feminino) - cor dos olhos (azuis, verdes ou castanhos) - cor dos cabelos (louros, castanhos, pretos) - idade 
// Faça um algoritmo que determine e escreva: 
// a) a maior idade dos habitantes; 
// b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 
// 35 anos, inclusive; 
// c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros; 
// O final do conjunto de habitantes é reconhecido pelo valor -1 informado como 
// idade. 
#include <stdio.h>
#include <string.h>
int main(){
    char sexo[50];
    int idade = 1;
    char corOlhos[50];
    char corCabelos[50];
    int maiorIdade = 0;
    int quantidadeMulheres = 0;
    int quantidadeOlhosVerdCabelosLoiros = 0;
    printf("Em uma pesquisa de algumas características físicas da população de uma certa região \n");

    while(idade > 0){
        printf("Digite aqui sua determinada idade: \n");
        scanf("%d", &idade);
        getchar();
        if(idade > 0){
            printf("Digite abaixo o seu sexo: (masculino, feminino)\n");
            fgets(sexo, sizeof(sexo), stdin); 
            printf("Digite abaixo a cor dos seus olhos (azuis, verdes ou castanhos)\n");
            fgets(corOlhos, sizeof(corOlhos), stdin); 
            printf("Digite abaixo a cor dos seus cabelos:(louros, castanhos, pretos)\n");
            fgets(corCabelos, sizeof(corCabelos), stdin);
            printf("%s", corCabelos);
            printf("%s", corOlhos);
            // nome[strcspn(str, "\n")] = 0;

            if(maiorIdade < idade){
                maiorIdade = idade;
            }
            if(strcmp(sexo, "feminino\n") == 0 && idade >= 18 && idade <= 35){
                quantidadeMulheres = quantidadeMulheres + 1;
                printf("%d", quantidadeMulheres);
            }
            if(strcmp(corOlhos, "verdes\n") == 0 && strcmp(corCabelos, "louros\n") == 0){
                quantidadeOlhosVerdCabelosLoiros = quantidadeOlhosVerdCabelosLoiros + 1;
            }
        }

    }
    printf("A maior idade do grupo de habitantes eh : %d \n", maiorIdade);
    printf("A quantidade de mulheres com idade entre 18 e 35: %d \n", quantidadeMulheres);
    printf("A quantidade de pessoas com cabelos louros e olhos verdes sao: %d \n", quantidadeOlhosVerdCabelosLoiros);
    return 0;
}
