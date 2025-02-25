/*Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de 
serviços é de: 
•  R$ 5.50 por diária, se o número de diárias for maior que 15; 
•  R$ 6.00 por diária, se o número de diárias for igual a 15; 
•  R$ 8.00 por diária, se o número de diárias for menor que 15. 
Construa um algoritmo que mostre o nome e o total da conta de um cliente. */

#include <stdio.h>
#define taxafixa 60
int main(){
    int dias;
    float diaria;
    int auxiliar;
    
    printf("Insira aqui q quantidade de dias que voce ficou hospedado: \n");
    scanf("%d", &dias);
    auxiliar = 1;
    if(dias > 15 && dias > 0){
        diaria = taxafixa + 5.50 * dias;
    } else {
        if(dias == 15){
            diaria = taxafixa + 6.00 * dias;
        } else {
            if(dias < 15 && dias > 0){
                diaria = taxafixa + 8.00 * dias;
            } else {
                auxiliar = 0;
                printf("Insira uma quantidade de dias valida.");
            }
        }
    }
    if(auxiliar == 1){
    printf("O preco total deu em R$%.2f \n", diaria);
    }
    return 0;
}
