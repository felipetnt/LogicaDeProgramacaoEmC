#include <stdio.h>
#define KMPORLITRO 12
int main(){

     float distancia;
     int tempo;
     float velocidade;
     float litros;

    printf("Afim de descobrir quanto seu carro gastou de litragem de gasolina e a  velocidade do percurso. Diga qual a distancia de sua viagem:\n");
    scanf("%f", &distancia);
    printf("Informe-nos o tempo em horas: \n");
    scanf("%d", &tempo);

    litros = distancia / KMPORLITRO;

    printf("Seu carro nessa viagem gastou cerca de: %.1f litros \n", litros);

    velocidade = distancia / tempo;

    printf("Seu carro andou a uma velocidade de %.1f kilometros por hora \n", velocidade);

    return 0;
}