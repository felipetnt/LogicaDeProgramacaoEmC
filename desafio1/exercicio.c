/*
    Você vai ajudar uma criança ela vai poder executar o seu programa apenas 10x
    Você deve permitir ela visualizar a tabuada que quiser. Se informar 50 a tabuada de 50. 
    Dentro dessa execução ela pode escolher se ela quer ver os números primos. 
    Se ela digitar 1 - ela tem que informar a tabuada
    Se ela digitar 2 - ela deve escolher quantos números primos ela deseja ver. 
    primos % 3 != 0 && primos % 4 != 0 && primos % 5 != 0 && primos % 6 != 0 && primos % 7 != 0 && primos % 8 != 0 && primos % 9 != 0 &&
*/
#include <stdio.h>
// #include <windows.h>
int main(){
    int opcao;
    int tabuada;
    int i;
    int resultadotabuada;
    int quantidadePrimos;
    int contagem = 0;
    int c;
    int numero;
    int divisor;
    int contadorPrimos = 0;
    
    for(c= 1; c <=10; c++){
        printf("Para inicializar o programa digite\n1- Caso queira a tabuada do numero que vc informara. \n2-Para pedir quantos numeros primos deseja.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Insira aqui, a tabuada do numero que deseja: ");
            scanf("%d", &tabuada);
            for(i = 1; i <= 10; i++){
                resultadotabuada = tabuada * i;
                printf("\n%d x %d = %d", tabuada, i, resultadotabuada);
            }
            break;
        case 2:
            printf("Insira aqui, quantos numeros primos voce deseja que o programa imprima: ");
            scanf("%d", &quantidadePrimos);
            for(contadorPrimos = 1; contadorPrimos <= quantidadePrimos;){
                for(numero = 1; numero <= (quantidadePrimos * 100) && contadorPrimos <= quantidadePrimos; numero++){
                    for(divisor = 1; divisor <= numero; divisor++){
                        if(numero % divisor == 0 ){
                            contagem = contagem + 1;
                        }
                    }
                    if(contagem == 2){
                        contadorPrimos = contadorPrimos + 1;
                        printf("%d\n", numero);
                    } 
                    contagem = 0;
                }
            }
            break;
        default:
            printf("Insira um numero valido.");
        }
    }
    return 0;
}