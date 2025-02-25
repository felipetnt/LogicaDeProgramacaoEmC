#include <stdio.h>
#define PI 3.14159 
int main(){

     float raio;
     float volume;
     float altura;
    printf("Para descobrir o volume do cilindro digite primeiro o raio da circunferencia da base:\n");
    scanf("%f", &raio);
    printf("Agora digite a altura do cilindro: \n");
    scanf("%f", &altura);

    volume = raio * raio * PI * altura;

    printf("O volume do cilindro vale: %.1f \n", volume);
    
    return 0;
}