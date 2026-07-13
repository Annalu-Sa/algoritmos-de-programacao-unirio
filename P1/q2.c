#include <stdio.h>
#include <math.h>

int main(){
    int N;
    scanf("%d", &N);
    float angulo = ((N - 2)* 180.0/N);
    printf("%.5f", angulo);
    return 0;
}