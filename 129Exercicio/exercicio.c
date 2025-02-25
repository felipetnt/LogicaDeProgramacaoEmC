// Escrever um algoritmo que lê um vetor N(20) e o escreve. Troque, a seguir, o 1º 
// elemento com o último, o 2º com o penúltimo etc. até o 10º com o 11º e escreva 
// o vetor N assim modificado. 
#include <stdio.h>
int main(){
    int v[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int aux;
    int i;
    int l = 20;

    for(i = 0; i < 20; i++){
        aux = v[i];
        v[i] = v[l];
        v[l] = aux;
        printf("%d\n", v[l]);
    }
    return 0;
}