// Considere que, para cada um dos hotéis fazenda da região, se tenha registrado 
// o nome do hotel, a sua distância do centro da cidade, o número médio de 
// visitantes no último feriado e o tipo de acesso ao hotel (0 – acesso não asfaltado; 
// 1 – acesso asfaltado). Construa um algoritmo que forneça: 
// a) O número de hoteis que distam mais de 15km do centro; 
// b) A quantidade média de visitantes no último feriado, nos hoteis com acesso 
// não asfaltado; 
// c) O nome e a distância do centro em Km, de todos os hoteis de acesso 
// asfaltado que tiveram menos de 1.000 visitantes. 
// Ex.: HA, DA=10, V=100, AC=0 
//        HB, DA=20, V=50, AC=1 

#include <stdio.h>
int main(){
    char nome[50];
    int distancia;
    int numeroMedioVisitantes;
    int numeroDeHoteisFazenda;
    int acessoAsfaltado;
    int contagemHoteisDistancia = 0;
    float mediavisitantes;
    float somadevisitantes = 0;
    int i = 1;
    printf("Insira aqui quantos hoteis fazenda possui em sua regiao: \n");
    scanf("%d", &numeroDeHoteisFazenda);

    while(i <= numeroDeHoteisFazenda){
        printf("Digite abaixo o nome do hotel fazenda que voce fara o cadastro\n");
        getchar();
        fgets(nome, sizeof(nome), stdin); 
        printf("Agora digite aqui se o acesso eh asfaltado ou nao, digite:\n0- caso nao seja asfaltado\n1 - caso  seja asfaltado \n");
        scanf("%d", &acessoAsfaltado);
        printf("Agora digite aqui sua distancia do centro em kilometros:\n");
        scanf("%d", &distancia);
        printf("A quantidade media de visitantes no ultimo feriado:\n");
        scanf("%d", &numeroMedioVisitantes);

        if(distancia > 15){
            contagemHoteisDistancia = contagemHoteisDistancia + 1;
        }
        if(acessoAsfaltado == 0){
            somadevisitantes = somadevisitantes + numeroMedioVisitantes;
            mediavisitantes = numeroMedioVisitantes / somadevisitantes;
        }
        if(acessoAsfaltado == 1 && numeroMedioVisitantes < 1000){
            printf("O hotel asfaltado %s que possui um total de %d visitantes em media durante o feriado, possui %d km de distancia do centro \n", nome, numeroMedioVisitantes, distancia);
        }
        i++;

    }
    printf("A quantidade de hoteis que possuem mais de 15km de distancia em relacao ao centro foram: %d \n", contagemHoteisDistancia);
    printf("A media de visitantes no ultimo feriado nos hoteis sem o asfalto foi de: %.0f \n", mediavisitantes);
    return 0;
}