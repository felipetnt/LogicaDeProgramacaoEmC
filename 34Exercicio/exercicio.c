// Construa um algoritmo que receba como entrada três valores e os imprima em 
//ordem decrescente. 

#include <stdio.h>
int main(){

    int a;
    int b;
    int c;

    printf("Digite um valor para A:");
    scanf("%d", &a);

    printf("Digite um valor para B:");
    scanf("%d", &b);

    printf("Digite um valor para C:");
    scanf("%d", &c);

    if(a > b && a > c){
        if(b > c){
            printf("Aqui esta os valores em ordem decrescente: %d, %d, %d", a, b, c);
        } else {
            printf("Aqui esta os valores em ordem decrescente: %d, %d, %d", a, c, b);
        }


    } else {
        if( b > a && b > c){
            if(a > c){
                printf("Aqui esta os valores em ordem decrescente: %d, %d, %d", b, a, c);
            } else {
                printf("Aqui esta os valores em ordem decrescente: %d, %d, %d", b, c, a);  
            }
        } else {

            if(c > a && c > b){
                if(a > b){
                    printf("Aqui esta os valores em ordem decrescente: %d, %d, %d", c, a, b);
                } else {
                    printf("Aqui esta os valores em ordem decrescente: %d, %d, %d", c, b, a);
                }
            }   
        }
    }
    return 0;
}
