//Imprima os 20 primeiros múltiplos de 5, desconsiderando o zero.
#include <stdio.h>
int main(){
    for(int i = 0; i <= 20; i++){
        if(i % 5 == 0){
            printf("%d\n", i);
        }
    }
}