#include <stdio.h>
#define cem 100
int main(){

     int HT;//horas trabalhadas
     float VH;//valor por hora trabalhada
     float PD;//percentual de desconto
     float SB;//salario bruto
     float TD;//total de desconto
     float SL;//salario liquido 
     printf("Digite aqui suas horas trabalhadas este mes:\n");
    scanf("%d", &HT);
    printf("Agora digite quanto voce trabalha por hora:\n");
    scanf("%f", &VH);
    printf("Agora digite seu percentual de desconto:\n");
    scanf("%f", &PD);
    
    SB = HT * VH;
    TD = (PD / cem) * SB;
    SL = SB - TD;
    

    printf("Seu salario bruto e de: %f \n", SB);
    printf("Seu total de desconto e de: %f \n", TD);
    printf("Seu salario liquido e de: %f \n", SL);
 
    return 0;
}