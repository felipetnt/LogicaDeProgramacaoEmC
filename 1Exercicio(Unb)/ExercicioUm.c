/*Fazer um algoritmo que obtenha a velocidade, de
 um carro e avise ao motorista somente se ele será
 multado, quando este estiver trafegando pelo Eixo
 Central (limite de 80 km/h) em Brasília.*/

 #include <stdio.h>
 int main(){
    int velocidade;
    printf("Insira aqui a velocidade que o usuario passou na Avenida X \n");
    scanf("%d", &velocidade);
    
    if(velocidade > 80){
        printf("Voce sera multado por ter passado na avenida X, a %d km/h", velocidade);
    }
}