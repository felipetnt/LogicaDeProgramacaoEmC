#include <stdio.h>
int main()
{
    int sexualidade;
    float peso;
    float altura;


    printf("Digite sua sexualidade (para masculino, digite 1 e para feminino, digite 2) abaixo: \n");
    scanf("%d", &sexualidade);

    printf("Digite sua altura abaixo: \n");
    scanf("%f", &altura);


    if(sexualidade == 1){

        peso = (72.5 * altura) - 58;
        printf("Seu peso eh %.2f", peso);
    }
    else{
        if (sexualidade == 2){
            peso = (62.1 * altura)- 44.7;
            printf("Seu peso eh %.2f", peso);
        } else {
            printf("Sexualidade inexistente.");
        }
    }
    return 0;
}