#include <stdio.h>
#define DOIS 2
int main(){

     float base;
     float altura;
     float area;
    printf("Para descobrir o tamanho da area do triangulo, primeiro digite a altura do triangulo:\n");
    scanf("%f", &altura);
    printf("Agora digite, o tamanho da base do triangulo:\n");
    scanf("%f", &base);

    area = base * altura / 2;

    printf("A area do triangulo vale: %.1f\n", area);
    
    return 0;
}