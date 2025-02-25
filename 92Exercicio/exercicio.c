#include <stdio.h>
int main(){
    int n;
    int m;
    float a = 0;
    float na;
    float soma;

    printf("Para calcula-lo, digite N abaixo: \n");
    scanf("%d", &m);
    for(n = m; n > 1; n--){

        for(na = 1; na <= n; na++){
            soma = n / na;
            a = a + soma;
        }
    }
    printf("Aqui esta o valor de A: %.1f", a);
    return 0;
}