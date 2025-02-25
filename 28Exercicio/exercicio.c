/*Dado um número de três algarismos N = CDU (onde C é o algarismo das 
centenas, D é o algarismo das dezenas e U o algarismo das unidades), 
considere o número M constituído pelos algarismos de N em ordem inversa, isto 
é, M = UDC. Gerar M a partir de N (p.ex.: N = 123  -> M = 321).  
Entrada: Algarismos CDU
Saida: Algarismos em UDC*/
#include <stdio.h>

int main(){
    int centena;
    int C; // S = A * 6 + B * 5 + C * 4 + D * 3 + E * 2;
    int dezena;
    int D;
    int unidade;
    int U; // S = A * 6 + B * 5 + C * 4 + D * 3 + E * 2;
    int D2;
    int U2;
    
    



    printf("Afim de gerar seu numero ao contrario, digite seu numero de 3 algarismos:\n");
    scanf("%d", &centena);

    //1 parte!!!
    U = centena % 10;
    dezena = centena / 10;
    D = dezena % 10;
    unidade = dezena / 10;
    C = unidade % 10;

    //2 parte!!!
    U2 = U * 10 + D;
    D2 = U2 * 10 + C;

    printf("Aqui esta seu numero ao contrario: %d\n", D2);
 
    return 0;
}