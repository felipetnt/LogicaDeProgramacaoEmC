/*Considere que o último concurso vestibular apresentou três provas: Português, 
Matemática e Conhecimentos Gerais. Considerando que para cada candidato 
tem-se um registro contendo o seu nome e as notas obtidas em cada uma das 
provas, construa um algoritmo que forneça: 
a) o nome e as notas em cada prova do candidato 
b) a média do candidato  
c) uma informação dizendo se o candidato foi aprovado ou não. Considere que 
um candidato é aprovado se sua média for maior que 7.0 e se não apresentou 
nenhuma nota abaixo de 5.0 */
    #include <stdio.h>
    int main(){
        float portugues;
        float matematica;
        float conhecimentos;
        float media;
        char nome[50];

        printf("Digite seu primeiro nome abaixo: \n");
        scanf("%s", nome);

        printf("Digite aqui abaixo, sua nota em portugues: \n");
        scanf("%f", &portugues);

        printf("Digite aqui abaixo, sua nota em matematica: \n");
        scanf("%f", &matematica);

        printf("Digite aqui abaixo, sua nota em conhecimentos gerais: \n");
        scanf("%f", &conhecimentos);

        media = (portugues + matematica + conhecimentos) / 3;


        if(media > 7 || portugues > 5 && matematica > 5 && conhecimentos > 5 ) {
            printf("Voce %s foi aprovado(a)!!!", nome);
        } else {
            printf("Voce %s foi reprovado(a)...", nome);
        }
        return 0;

    }