/*Dado três valores, verificar se eles podem ser
 valores dos lados de um triângulo (triângulo é uma
 figura geométrica onde cada lado é menor do que a
 soma dos outros dois lados) e avisar seu usuário.*/

 #include <stdio.h>
 int main(){
    int lado1;
    int lado2;
    int lado3;

    //Entrada.
    printf("Para descobrir se 3 valores, formam um triangulo, informe o valor do lado 1: \n");
    scanf("%d", &lado1);

    printf("Informe o valor do lado 2: \n");
    scanf("%d", &lado2);

    printf("Informe o valor do lado 3: \n");
    scanf("%d", &lado3);

    //Processador
    if(lado1 < lado2 + lado3){
        if(lado2 < lado1 + lado3){
            if(lado3 < lado1 + lado2){

                //Saida 1
                printf("Os lados %d, %d, %d formam um triangulo.", lado1, lado2, lado3);
            }
        }
    } else {
        //Saida 2
        printf("Os valores informados nao formam um triangulo.");
    }

    return 0;
 }