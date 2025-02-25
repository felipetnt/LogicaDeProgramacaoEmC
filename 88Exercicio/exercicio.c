//  Some os números de 1 a 100 e imprima o valor. 
#include <stdio.h>
int main(){
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++){
    soma = i + soma;
    }
    printf("%d", soma);
    return 0;
}