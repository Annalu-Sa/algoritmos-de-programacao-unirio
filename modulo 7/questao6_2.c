/*
Implemente a função
int soma_digitos( int num );
que retorna a soma dos dígitos do número num.
*/

#include <stdio.h>
#include <math.h>

int soma_digitos(int num){
    int digitos = 1;
    while(num/10 != 0){
        digitos += num%10;
        num = num/10;
    }
    return digitos;
}

int main() {
	int input;
    scanf("%d", &input);
    int output = soma_digitos(input);
    printf("%d", output);
    return 0;
}