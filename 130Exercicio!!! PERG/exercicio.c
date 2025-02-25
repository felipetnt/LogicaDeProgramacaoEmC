#include <stdio.h>
int main(){
    int g[13]; // gabarito, PERGUNTAR AO JEYSEL O QUE VAI SER?
    int r[13]; // resposta do candidato
    int i;
    int j;
    for(i = 1; i <= 13; i++){
        printf("Insira aqui o %d digito do=gabarito da loterica: \n", i);
        scanf("%d", &g[i]);
    }
    while (j != 1){
        for(i = 1; i <= 13; i++){
            printf("Insira aqui o %d digito do seu cartao de loterica: \n", i);
            scanf("%d", &r[i]);
        }
        if(g[13] == r[13]){
            j = 1;
            printf("PARABENS, GANHADOR!");
        }
    }
    return 0;
}   