// Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria 
// qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o 
// pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de 
// xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter 
// apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um 
// algoritmo para calcular o total de grãos que o monge recebeu.  
//Entrada: graos 
//Processador: ir multiplicando de 4 em 4??
//Saida numero de graos totais
#define LIMITE 64
#include <stdio.h>
int main(){
    int casas;
    unsigned long long soma = 0LL;
    unsigned long long graos = 1LL;
    for(casas = 2; casas <= LIMITE; casas++){
        graos = graos * 2;
        soma = graos + soma;

    }
    printf("\n %llu", soma);
    return 0;
}
