#include <stdio.h>
int main(){

    float potencializacao = 3;
    float potencia; // utilizada a partir de numeros impares a partir de 3, 5 ,7 ... 
    float denominador = 2; // i, variavel ultilizada com fim de fechar o programa, ela que resetara toda vez ate o programa se satisfazer
    // nao sei como vou fazer, mas vou multiplicando os no for, ate multiplicalos por 1, ou seja, 7! eh 7. 6 .5. 4. 3. 2. 1
    float s = 0; // resultado do calculo de merda la embaixo. 
    float numerador = 1;
    float numeradortodo = 1;
    float denominadortodo = 1;
    int contadorgeral;
    float fracao;
    printf("Abaixo, utilizaremos o calculo 50 vezes. \n");
     for(contadorgeral = 1; contadorgeral <= 4; contadorgeral++){
        for(potencia = 1 ; potencia <= potencializacao; potencia++){
            numeradortodo = numerador * numeradortodo;
        }
        for(; denominador >= 2; denominador--){
            denominadortodo = denominadortodo * denominador;
        }
        denominador = denominador + 2;
        potencializacao = potencializacao + 2;
        numerador = numerador + 2;

        fracao = numeradortodo / denominadortodo;
        printf("%d fracao \n");
        
        if(contadorgeral % 2 == 0){
            s = s - fracao;
        } else {
            s = s + fracao;
        }

        
    }
    printf("Seu resultado eh %.1f", s);
    
    return 0;
}