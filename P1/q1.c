#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int zeros = 0;
    while(num > 0){
        if(num % 10 == 0){
            zeros++;
        }
        num = num/10;
    }
    printf("%d zeros\n", zeros);
}
