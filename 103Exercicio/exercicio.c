// Um determinado material radioativo perde metade de sua massa a cada 50 
// segundos. Dada a massa inicial, em gramas, faça um programa que determine o 
// tempo necessário para que essa massa se torne menor que 0,05 gramas. 

#include <stdio.h>
int main(){
    float massa;
    int tempo = 50;
    float massa2;

    printf("Afim de descobrir em quanto tempo, seu material radioativo chega em 0.05 gramas, digite aqui sua massa: ");
    scanf("%f", &massa2);

    for(massa = massa2; massa >= 0.05; massa--){
        massa = massa + 1;
        massa = massa / 2;
        tempo = 50 + tempo;
    }
    printf("O tempo que a massa ficou para ficar menor que 0.05 gramas foi de : %d segundos.", tempo);
    return 0;
}