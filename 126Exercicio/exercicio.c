#include <stdio.h>
int main(){
    int v[5] = {1, 2, 3, 4, 5};
    int d[5];
    int i;

    for(i = 0; i < 5; i++){
        d[i] = v[i];
        printf("%d\n", d[i]);
    }
    return 0;
}