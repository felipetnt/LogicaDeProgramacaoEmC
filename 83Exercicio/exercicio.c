// Crie um algoritmo para uma calculadora utilizando a instrução escolha-caso para 
// determinar a operação que deve ser executada, conforme o usuário escolher no 
// menu de opções. Conforme a opção escolhida pelo usuário, uma operação 
// diferente da calculadora deve ser executada.  

#include <stdio.h>
int main(){
    char opcao[4];
    int numero;
    int tipo;
    int resultado;
    int numero2;
    printf("Para comecar os calculos, insira primeiro, voce deseja que seu calculo seja de apenas um numero? (Sim, Nao)\n");
    scanf("%s", opcao);
    printf("Insira o numero que voce deseja utilizar: \n");
    scanf("%d", &numero);
    getchar();
    if(strcmp(opcao, "Sim") == 0){

        printf("Voce deseja realizar quais tipos de operacoes? \n");
        printf("1. Quadrado do numero. \n");
        printf("2. Raiz quadrada do numero. \n");
        printf("3. Seu dobro.\n");
        printf("4. Sua metade.\n");
        printf("Selecione a operacao, e depois insira-a aqui. \n");
        scanf("%d", &tipo);
        getchar();


        switch (tipo)
        {
        case 1:
            resultado = numero * numero;
            break;
        case 2:
            resultado = sqrt(numero);
            break;
        case 3:
            resultado = numero + numero;
            break;
        case 4:
            resultado = numero / 2;
            break;
        
        default: 
            printf("O numero inserido nao eh valido.");
            break;
        }
    } else {
        if(strcmp(opcao, "Nao") == 0){
            printf("Insira o  segundo numero que voce deseja utilizar");
            scanf("%d", &numero2);

            printf("Voce deseja realizar quais tipos de operacoes? \n");
            printf("1. Soma \n");
            printf("2. Subtracao \n");
            printf("3. Multiplicacao.\n");
            printf("4. Divisao\n");
            printf("Selecione a operacao, e depois insira-a aqui. \n");
            scanf("%d", &tipo);
            getchar();

            switch (tipo)
            {
            case 1:
                resultado = numero + numero2;
                break;
            case 2:
                resultado = numero - numero2;
                break;
            case 3:
                resultado = numero * numero2;
                break;
            case 4:
                resultado = numero / numero2;
                break;
            
            default:
                break;
            }
        }
    }
    printf("O resultado de sua conta selecionada deu %d.", resultado);
    return 0;
}