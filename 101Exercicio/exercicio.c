// Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de 
// serviços. A taxa de serviços é de: 
// • R$ 4,00 por diária, se o número de diárias for < 15; 
// • R$ 3,60 por diária, se o número de diárias for = 15; 
// • R$ 3,00 por diária, se o número de diárias for > 15. 
// Faça um algoritmo que imprima o nome e o total da conta de cada cliente do hotel. 
// Imprima também o total ganho pelo hotel.
#define LIMITE 30
#include <stdio.h>
int main(){
    int quarto;
    char nome[50];
    float diaria = 0;
    float somatotal = 0;
    int dia = 0;

    for(quarto = 1; quarto <= LIMITE; quarto++){

        printf("Insira seu nome aqui: \n");
        getchar();
        fgets(nome, sizeof(nome), stdin);
        getchar();
        printf("Insira aqui a quantidade de dias que ficara aqui no hotel: \n");
        scanf("%d", &dia);
        getchar();

        if(dia < 15 && dia > 0){
            diaria = 4.0 * dia;
            somatotal = diaria + somatotal; //soma total passada, pra prox      
        } else {
            if(dia == 15){
                diaria = 3.6 * dia;
                somatotal = diaria + somatotal; //soma total passada, pra prox     
            } else {
                if(dia > 15){
                    diaria = 3.0 * dia;
                    somatotal = diaria + somatotal; //soma total passada, pra prox 
                } else {
                    printf("Numeros negativos, nao existem. \n");
                }
            }
        }

        if(dia > 0){
            printf("O sr(a). %s \n", nome);
            printf("Gastou hoje, R$%.2f \n", diaria);
        }
    }
    
    printf("O total que gastaram no hotel pelos 30 quartos foi, R$%.2f", somatotal);
    return 0;
}