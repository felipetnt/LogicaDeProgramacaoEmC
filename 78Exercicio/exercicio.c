// Faça um programa que lê quatro valores: I, A, B e C, onde I é um número inteiro 
// e positivo e A, B, e C são quaisquer valores reais. O programa deve escrever os 
// valores lidos e: 
// • se I = 1, escrever os três valores A, B e C em ordem crescente; 
// • se I = 2, escrever os três valores A, B e C em ordem decrescente; 
// • se I = 3, escrever os três valores A, B, e C de forma que o maior valor fique 
// entre os outros dois; 
// • se I não for um dos três valores acima, dar uma mensagem indicando isto. 

#include <stdio.h>
int main(){
    int A;
    int B;
    int C;
    int I;
    printf("Defina um valor para A: \n");
    scanf("%d", &A);
    getchar();
    printf("Defina um valor para B: \n");
    scanf("%d", &B);
    getchar();
    printf("Defina um valor para C: \n");
    scanf("%d", &C);
    getchar();
    printf("Defina um valor para por os outros valores em tipo de ordem \n  • se I = 1, escrever os três valores A, B e C em ordem crescente; \n se I = 2, escrever os três valores A, B e C em ordem decrescente; \nse I = 3, escrever os três valores A, B, e C de forma que o maior valor fique entre os outros dois; \n Digite aqui: \n");
    scanf("%d", &I);
    getchar();

    switch (I)
    {
    case 1:
        if(A > B && B > C){
            printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", C, A, B);
        } else {
            if(B > A && A > C){
                printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", C, B, A);
            } else {
                if(C > B && B > A){
                    printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", A, B, C);
                } else {
                    if(A > C && C > B){
                        printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", B, C, A);
                    } else {
                        if(B > C && C > A){
                            printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", A, C, B);
                        } else {
                            if(C > A && A > B){
                                printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", B, A, C);
                            } 
                        }
                    }
                }
            }
        }
        break;
    case 2:
        if(A > B && B > C){
            printf("A ordem solicitada foi a decrescente! Aqui esta \n %d, %d, %d", A, B, C);
        } else {
            if(B > A && A > C){
                printf("A ordem solicitada foi a decrescente! Aqui esta \n %d, %d, %d", B, A, C);
            } else {
                if(C > B && B > A){
                    printf("A ordem solicitada foi a decrescente! Aqui esta \n %d, %d, %d", C, B, A);
                } else {
                    if(A > C && C > B){
                        printf("A ordem solicitada foi a decrescente! Aqui esta \n %d, %d, %d", A, C, B);
                    } else {
                        if(B > C && C > A){
                            printf("A ordem solicitada foi a decrescente! Aqui esta \n %d, %d, %d", B, C, A);
                        } else {
                            if(C > A && A > B){
                                printf("A ordem solicitada foi a decrescente! Aqui esta \n %d, %d, %d", C, A, B);
                            } 
                        }
                    }
                }
            }
        }
        break;

        case 3:
        if(A > B && B > C){
            printf("A ordem solicitada foi a diferentona! Aqui esta \n %d, %d, %d", C, A, B);
        } else {
            if(B > A && A > C){
                printf("A ordem solicitada foi a decrescente! Aqui esta \n %d, %d, %d", A, B, C);
            } else {
                if(C > B && B > A){
                    printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", B, C, A);
                } else {
                    if(A > C && C > B){
                        printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", B, A, C);
                    } else {
                        if(B > C && C > A){
                            printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", C, B, A);
                        } else {
                            if(C > A && A > B){
                                printf("A ordem solicitada foi a crescente! Aqui esta \n %d, %d, %d", A, C, B);
                            } 
                        }
                    }
                }
            }
        }
        break;

    default:
        printf("Ordem invalida, retorne ao captcha e insira valores validos.");
        break;
    }
    return 0;
}