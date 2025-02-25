/* Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma 
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda 
de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor 
vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 
50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro 
caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório 
contendo nome, valor da venda e comissão de cada um dos corretores. O 
relatório deve mostrar também o total de vendas da empresa. 
Entrada: 
Saida: 
*/
#include <stdio.h>
int main(){

    char nome[50];
    char letra;
    int num;

    printf("Digite sua letra favorita: \n");
    scanf("%c", &letra);

    printf("Digite um numero: \n");
    scanf("%d", &num);

    getchar();// retira o \0 do buffer.
    printf("Digite seu nome:");
    fgets(nome, sizeof(nome), stdin);  // Lê até 49 caracteres ou nova linha,
    //fgets = eh o comando que le string.(conjunto de char)
    //nome, se refere ao nome da variavel que esta sendo lida.
    //size of = refere-se ao tamanho da variavel que esta sendo lida.
    //stdin = significa que é a entrada padrao (teclado).

    printf("Olá, %s!\n", nome);
    printf("Mostre aqui sua letra favorita: %c", letra);
    return 0;
}
 
