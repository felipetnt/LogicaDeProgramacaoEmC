#include <stdio.h>
#include <string.h> // ATENTE-SE A ESSA IMPORTACAO DE BIBLIOTECA

int main() {
    char str1[] = "java";
    char str2[] = "javinha";
    int tamanho = strlen(str2);

    int result = strcmp(str1, str2); // O QUE MANDA SE SAO IGUAIS EH O RESULTADO DESSA CHAMADA
    //strcomp retornara somente 3 valores, 1 , 0  e -1, mas para ela calcular isso, ela calcula a distancia alfabetica entre cada caracter.

    if (result == 0) {
        printf("As strings são iguais.\n");
    } else if (result < 0) {
        printf("'%s' vem antes de '%s' na ordem lexicográfica.\n", str1, str2);
    } else {
        printf("'%s' vem depois de '%s' na ordem lexicográfica.\n", str1, str2);
    }
    printf("%d \n", tamanho);
    printf("%d", result);
    return 0;
}