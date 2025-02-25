/* Um determinado clube de futebol pretende classificar seus atletas em categorias 
e para isto ele contratou um programador para criar um programa que 
executasse esta tarefa. Para isso o clube criou uma tabela que continha a faixa 
etária do atleta e sua categoria. A tabela está demonstrada abaixo:  
IDADE  
De 05 a 10  
De 11 a 15  
De 16 a 20  
De 21 a 25  
CATEGORIA  
Infantil 
Juvenil 
Junior 
Profissional 
Construa um programa que solicite o nome e a idade de um atleta e imprima a 
sua categoria.
Entrada: nome e a idade
Saida: Categoria*/

#include <stdio.h>
int main(){
    int idade;
    char nome[50];

    printf("Para descobrir sua categoria, digite seu nome completo:");
    fgets(nome, sizeof(nome), stdin); 
    
    printf("Agora digite sua idade: \n");
    scanf("%d", &idade );

    if(idade >= 5 && idade <= 10){
        printf("Voce faz parte da categoria infantil.");
    } else {
        if(idade >= 11 && idade <= 15){
        printf("Voce faz parte da categoria juvenil.");
        } else {
            if(idade >= 16 && idade <= 20){
                printf("Voce faz parte da categoria junior.");
            } else { 
                if(idade >= 21 && idade <= 25){
                    printf("Voce faz parte da categoria profissional.");
                } else {
                     printf("Favor inserir uma idade valida.");
                }
            }
        }
    }
    return 0;
}
