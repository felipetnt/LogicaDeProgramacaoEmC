/*Leia um código de cinco algarismos (variável Codigo) e gere o digito verificador 
(DigitoV) módulo 7 para o mesmo. 
Supondo que os cinco algarismos do código são ABCDE, uma forma de calcular 
o dígito desejado, com módulo 7 é: 
DigitoV = resto da divisão de S por 7, onde 
S = 6*A + 5*B + 4*C + 3*D + 2*E 
Entrada: (Int) Codigo de 5 algarismos. 
Saida: (Int) Digito Verificador.
Processador:  */
#include <stdio.h>

int main(){
    int codigo;
    int A; // S = A * 6 + B * 5 + C * 4 + D * 3 + E * 2;
    int code2;
    int B;
    int code3;
    int C;
    int code4;
    int D;
    int code5;
    int E;
    int S;
    int digitov;



    printf("Afim de gerar um digito verificador, digite seu codigo com 5 digitos:\n");
    scanf("%d", &codigo);


    E = codigo % 10;
    code2 = codigo / 10;
    D = code2 % 10;
    code3 = code2 / 10;
    C = code3 % 10;
    code4 = code3 / 10;
    B = code4 % 10;
    code5 = code4 / 10;
    A = code5 % 10;


    
    
    S = A * 6 + B * 5 + C * 4 + D * 3 + E * 2;
    digitov = S % 7;
    
    printf("A partir de seu codigo %d \n", codigo);
    printf("Seu digito verificador eh: %d \n", digitov);
 
    return 0;
}

