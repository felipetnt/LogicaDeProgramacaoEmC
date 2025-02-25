#include <stdio.h>
#define NOVE 9
#define CENTO 160
#define CINCO 5
int main(){
 
     float celsius;
     float fahrenheit;
    printf("Para transformar a temperatura de celsius para fahrenheit, digite a temperatura em celsius:\n");
    scanf("%f", &celsius);
    
    

    fahrenheit = (NOVE * celsius + CENTO) / CINCO;

    printf("A temperatura em fahrenheit e: %.1f\n", fahrenheit);                           // (9 * C + 160) / 5,
    
    return 0;
}