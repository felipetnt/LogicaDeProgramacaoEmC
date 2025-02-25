/*Faça um algoritmo que leia quatro números e apresente os resultados de adição 
e multiplicação dos valores entre si, baseando-se na utilização da propriedade 
distributiva, ou seja, se forem lidas as variáveis A, B, C e D, devem ser somadas 
e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C 
com D. 
TANTO FAZ*/

#include <stdio.h>
int main(){
    int A;
    int B;
    int C;
    int D;
    int somaAB;
    int somaAC;
    int somaAD;
    int somaBC;
    int somaBD;
    int somaCD;
    int multAB;
    int multAC;
    int multAD;
    int multBC;
    int multBD;
    int multCD; 

    printf("Para somar e multiplicar 4 valores, A, B, C e D, digite o valor de A abaixo: \n");
    scanf("%d", &A);
    printf("Agora digite o valor de B: \n");
    scanf("%d", &B);
    printf("Agora digite o valor de C: \n");
    scanf("%d", &C);
    printf("Agora digite o valor de D: \n");
    scanf("%d", &D);

    somaAB = A + B;
    multAB = A * B;

    printf("O resultado da soma dos dois primeiros valores, A e B, resulta em: %d", somaAB);
    printf("O resultado da multiplicacao entre os mesmos vale %d \n", multAB);

    somaAC = A + C;
    multAC = A * C;

    printf("O resultado da soma dos dois primeiros valores, A e C, resulta em: %d", somaAC);
    printf("O resultado da multiplicacao entre os mesmos vale: %d \n", multAC);

    somaAD = A + D;
    multAD = A * D;

    printf("O resultado da soma dos dois primeiros valores, A e D, resulta em: %d", somaAD);
    printf("O resultado da multiplicacao entre os mesmos vale %d \n", multAD);

    somaBC = C + B;
    multBC = C * B;

    printf("O resultado da soma dos dois primeiros valores, B e C, resulta em: %d", somaBC);
    printf("O resultado da multiplicacao entre os mesmos vale %d\n", multBC);

    somaBD = D + B;
    multBD = D * B;

    printf("O resultado da soma dos dois primeiros valores, B e D, resulta em: %d", somaBD);
    printf("O resultado da multiplicacao entre os mesmos vale %d\n", multBD);

    somaCD = C + D;
    multCD = C * D;

    printf("O resultado da soma dos dois primeiros valores, B e C, resulta em: %d", somaCD);
    printf("O resultado da multiplicacao entre os mesmos vale %d\n", multCD);

    return 0;

}






