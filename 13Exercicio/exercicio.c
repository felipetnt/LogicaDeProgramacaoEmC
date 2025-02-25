#include <stdio.h>
#define NOVE 9
#define TRINTA 32
#define CINCO 5
int main(){
 
     float fahrenheit;
     float celsius;
    printf("Para transformar a temperatura de fahrenheit para celsius, digite a temperatura em fahrenheit:\n");
    scanf("%f", &fahrenheit);
    
    

    celsius =  (fahrenheit - TRINTA) * ( CINCO / NOVE);

    printf("A temperatura em celsius e: %.1f\n", celsius);                           //  (F – 32) * ( 5 / 9),
    
    return 0;
}