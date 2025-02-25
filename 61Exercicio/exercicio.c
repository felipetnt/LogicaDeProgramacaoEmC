/*Um usuário deseja um algoritmo pelo qual possa escolher que tipo de média 
deseja calcular a partir de três notas. Faça um algoritmo que leia as notas, a 
opção escolhida pelo usuário e calcule a média: 
1- aritmética 
2- ponderada (pesos 3, 3, 4)  */

#include <stdio.h>
int main(){
    float valor1;
    float valor2;
    float valor3;
    float media;

    printf("Informe o primeiro valor: \n");
    scanf("%f", &valor1);
    printf("Informe o segundo valor: \n");
    scanf("%f", &valor2);
    printf("Informe o terceiro valor: \n");
    scanf("%f", &valor3);
    printf("Voce deseja operar por media aritmetica (1), ou media ponderada (2)?\n");
    scanf("%f", &media);

    if(media == 1){
        media = (valor1 + valor2 + valor3)/3;
    } else {
        media = (valor1 * 3  + valor2 * 3 + valor3 * 4)/(3+3+4);
    }
    printf("O valor da media solicitada eh : %.1f", media);
    return 0;
}
