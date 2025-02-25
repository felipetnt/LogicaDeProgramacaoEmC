// Crie um algoritmo chamado Estacoes. Este algoritmo deve ler uma data e 
// armazenar na variável mes um número entre 1 e 12, correspondendo a um dos 
// meses do ano. No final, você deve imprimir uma mensagem conforme o exemplo:  
// "A estação do ano correspondente ao mês 3 é Verão" 
// Considere a estação prevalente para cada mês: 
// a) Janeiro (1): Verão 
// b) Fevereiro (2): Verão 
// c) Março (3): Verão 
// d) Abril (4): Outono 
// e) Maio (5): Outono 
// f) Junho (6): Outono 
// g) Julho (7): Inverno 
// h) Agosto (8): Inverno 
// i) 
// Setembro (9): Inverno 
// j) 
// Outubro (10): Primavera 
// k) Novembro (10): Primavera 
// l) 
// Dezembro (10): Primavera 

#include <stdio.h>
int main(){
    int estacao;

    printf("Selecione sua estacao pelo numero do mes (1 a 12)");
    scanf("%d", &estacao);
    getchar();

    switch (estacao)
    {
    case 1:
       printf("Voce selecionou o mes 1, correspondente ao verao");
        break;
    case 2:
       printf("Voce selecionou o mes 1, correspondente ao verao");
        break;
    case 3:
       printf("Voce selecionou o mes 1, correspondente ao verao");
        break;
    case 4:
       printf("Voce selecionou o mes 1, correspondente ao outono");
        break;
    case 5:
       printf("Voce selecionou o mes 1, correspondente ao outono");
        break;
    case 6:
       printf("Voce selecionou o mes 1, correspondente ao outono");
        break;
    case 7:
       printf("Voce selecionou o mes 1, correspondente ao inverno");
        break;
    case 8:
       printf("Voce selecionou o mes 1, correspondente ao inverno");
        break;
    case 9:
       printf("Voce selecionou o mes 1, correspondente ao inverno");
        break;
    case 10:
       printf("Voce selecionou o mes 1, correspondente ao primavera");
        break;
    case 11:
       printf("Voce selecionou o mes 1, correspondente ao primavera");
        break;
    case 12:
       printf("Voce selecionou o mes 1, correspondente ao primavera");
        break;
    
    default:
    printf("Insira um numero valido (1 a 12)");
        break;
    }
return 0;
}