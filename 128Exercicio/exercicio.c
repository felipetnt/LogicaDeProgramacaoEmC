// Faça um algoritmo que faça a união de dois vetores de mesmo tamanho e 
// mesmo tipo em um terceiro vetor com dobro do tamanho. 

#include <stdio.h>
int main(){
    int v[5] = {1, 2, 3, 4, 5};
    int d[5] = {6, 7, 8, 9, 10};
    int s[10];
    int i;
    int l = 0;

    for(i = 0; i < 5; i++){
        s[i] = v[i];
        printf("%d\n", s[i]);
    }
    for(; i < 10; i++){
        s[i] = d[l];
        l++;
        printf("%d\n", s[i]);
    }
    return 0;
}
