 #include <stdio.h>
 int main(){
    int A;
    int B;
    int subtracao;

    //Entrada.
    printf("Para a subtração de dois valores digite o primeiro valor: \n");
    scanf("%d", &A);

    printf("Informe o segundo valor: \n");
    scanf("%d", &B);

    //Processador
    if(A > B){
        subtracao =  A - B;
        printf("O resultado da subtracao eh: %d", subtracao);
    } else {
        if(B > A){
            subtracao = B - A;
            printf("O resultado da subtracao eh: %d", subtracao);
        } else {
            printf("Não ha subtração para tal...");
        }
    }

    return 0;
 }