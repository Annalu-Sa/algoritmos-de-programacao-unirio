/*
Leia um número n positivo e imprima um quadrado n x n de asteriscos. Por exemplo, se n = 3, imprima:
* * *
* * *
* * *
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("\n");
        for(int j = 0; j < n; j++){
            printf("*");
        }
    }
    return 0;
}