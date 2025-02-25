#include <stdio.h>
#define PI 3.1415926 //no define, os valores literais devem respeitar os tipos, se for tipo texto (com aspas) sem, sem aspas
int main(){

     float raio;
     float area;

    printf("Para descobrir o tamanho da area da circunferencia digite o raio:\n");
    scanf("%f", &raio);

    area = raio * raio * PI;

    printf("A area da circunferencia vale: %.1f\n", area);
    
    return 0;
}