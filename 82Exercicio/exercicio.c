// Construa um algoritmo que, tendo como dados de entrada o preço de um 
// produto e um código de origem, mostre o preço junto de sua procedência (ex. 
// 500,00 – Sul). Caso o código não seja nenhum dos especificados, o produto 
// deve ser encarado como importado. 
// Código de origem  
// 1 – Sul 
// 5 ou 6 – Nordeste 
// 2 – Norte 
// 3 – Leste 
// 4 – Oeste 
// 7 ou 8 ou 9 – Sudeste 
// 10 até 20 – Centro Oeste 
// 25 até 35 – Nordeste 
// Entrada: preco de um produto, e um codigo origem.
// Saida: preco de procedencia

#include <stdio.h>
int main(){
    int codigo;
    float preco;

    printf("Afim de descobrir de onde o produto veio, imprima o preco do produto: \n");
    scanf("%f", &preco);
    getchar();
    printf("Agora digite o numero de codigo do produto: \n");
    scanf("%d", &codigo);
    getchar();

    switch (codigo)
    {
    case 1:
        printf("R$%.2f - Sul", preco );
        break;
    case 2:
        printf("R$%.2f - Norte", preco );
        break;
    case 3:
        printf("R$%.2f - Leste", preco );
        break;
    case 4:
        printf("R$%.2f - Oeste", preco );
        break;
    case 5:
        printf("R$%.2f - Nordeste", preco );
        break;
    case 6:
        printf("R$%.2f - Nordeste", preco );
        break;
    case 7:
        printf("R$%.2f - Sudeste", preco );
        break;
    case 8:
        printf("R$%.2f - Sudeste", preco );
        break;
    case 9:
        printf("R$%.2f - Sudeste", preco );
        break;
    
    default:

        if(codigo >= 10 && codigo<= 20){
            printf("R$%.2f - Centro Oeste", preco );
        } else {
            if(codigo >= 25 && codigo<= 35){
                printf("R$%.2f - Centro Oeste", preco );
            } else {
                printf("R$%.2f - Importado.", preco);
            }
        }
        break;
    }

    return 0;
}
    