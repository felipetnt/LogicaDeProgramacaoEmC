// Faça um algoritmo que some o conteúdo de dois vetores e armazene o 
// resultado em um terceiro vetor.
#include <stdio.h>
int main(){
    int v[5] = {1, 2, 3, 4, 5};
    int d[5] = {5, 4, 3, 2, 1};
    int x[5];
    int i;

    for(i = 0; i < 5; i++){
        x[i] = v[i] + d[i];
        printf("%d\n", x[i]);
    }
    return 0;
}
