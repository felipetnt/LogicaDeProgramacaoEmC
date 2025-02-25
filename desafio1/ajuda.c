// if(primos <= 4){
//     if(primos % 2 == 1 || primos % 3 != 0){
//         printf("\n%d", primos);
//         contagem = contagem + 1;
//     }
                        
// } else {
//     if(primos <= 5){
//         if(primos % 2 != 1 && primos % 3 != 1 && primos != 1 && primos % 4 != 1){
//             printf("\n%d", primos);
//             contagem = contagem + 1;
//         }
                            
//     } else {
//         if(primos <= 6){
//             if(primos % 2 != 1 && primos % 3 != 1 && primos != 1 && primos % 4 != 1 && primos % 5 != 1){
//                 printf("\n%d", primos);
//                 contagem = contagem + 1;
//             }
                                
//         } else {
//             if(primos <= 7){
//                 if(primos % 2 != 1 && primos % 3 != 1 && primos != 1 && primos % 4 != 1 && primos % 5 != 1 && primos % 6 != 1 && primos % 7 != 1){
//                     printf("\n%d", primos);
//                     contagem = contagem + 1;
//                 }
                                    
//             } else {
//                 if(primos <= 8){
//                     if(primos % 2 != 1 && primos % 3 != 1 && primos != 1 && primos % 4 != 1 && primos % 5 != 1 && primos % 6 != 1 && primos % 7 != 1 && primos % 8 != 1){
//                         printf("\n%d", primos);
//                         contagem = contagem + 1;
//                     }
                                        
//                 } else {
//                     if(primos <= 9){
//                         if(primos % 2 != 1 && primos % 3 != 1 && primos != 1 && primos % 4 != 1 && primos % 5 != 1 && primos % 6 != 1 && primos % 7 != 1 && primos % 8 != 1 && primos % 9 != 1){
//                             printf("\n%d", primos);
//                             contagem = contagem + 1;
//                         }                       
//                     } 
//                 }
//             }
//         }
//     }
// }

#include <stdio.h>
int main(){
    int i;
    int numero;
    int contagem = 0;
    printf("Insira aqui um numero para descobrir se ele eh primo.");
    scanf("%d", &numero);

    for(i = 1 ; i <= numero ; i++){
        if(numero % i == 0){
            contagem = contagem + 1;
        }
    }
    
    if(contagem == 2){
        printf("Este numero eh primo");
    } else {
        printf("Este numero nao eh primo.");
    }
    return 0;
}