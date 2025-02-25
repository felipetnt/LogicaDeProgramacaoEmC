#include <stdio.h>
#define primeirodesc 0.1
#define segundodesc 0.05
int main(){
    /*Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto 
do trabalhador como contribuição à previdência social. Após esse desconto, há 
um outro desconto de 5% sobre o valor restante do salário bruto, a título de um 
determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e 
imprima o seu salário líquido. 
Entrada: Salario bruto
Meio: Variante temporaria
Saida: Salario liquido*/

     
     float SB;//salario bruto
     float SBL; //variante temporaria
     float SL;//salario liquido 
     printf("Com objetivo de descobrir seu salario liquido, digite aqui seu salario bruto:\n");
     scanf("%f", &SB);
    
    
    SBL = SB - (SB * primeirodesc);
    SL = SBL - (SBL * segundodesc);
    
    
    printf("Seu salario liquido e de: %f \n", SL);
 
    return 0;
}