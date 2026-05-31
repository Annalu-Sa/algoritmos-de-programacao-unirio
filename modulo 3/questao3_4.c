//Imprima os 30 primeiros ímpares, desconsiderando o zero.
#include <stdio.h>
int main(){
    for(int i = 0; i <= 30; i++){
        if(i % 2 == 1){
            printf("%d\n", i);
        }
    }
}