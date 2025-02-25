#include <stdio.h>
int main(){
    int anos;
    int meses;
    int dias;
    printf("Digite aqui, quantos anos voce viveu: \n");
    scanf("%d", &anos);
    meses = anos * 12;
    dias = meses * 30;
    printf("Voce viveu %d dias.", dias);
    return 0;
}