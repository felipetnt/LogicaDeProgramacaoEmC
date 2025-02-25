/*Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme
a condição:
• “F1”, se N <= 10
• “F2”, se N > 10 e N <= 100
• “F3”, se n > 100 */

#include <stdio.h>
int main()
{
    int N;

    printf("Imprima o valor de N: \n");
    scanf("%d", &N);

    if (N <= 10)
    {
        printf("F1");
    }

    if (N > 10 && N <= 100)
    {
        printf("F2");
    }

    if (N > 100)
    {
        printf("F3");
    }
    return 0;
}