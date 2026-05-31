//Imprima os 50 primeiros números pares, desconsiderando o zero.
#include <stdio.h>
int main(){
    for(int i = 0; i <= 50; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
}