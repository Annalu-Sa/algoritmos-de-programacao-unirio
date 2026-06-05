/*
Implemente a função int digitos( int num );
que retorna a quantidade de dígitos do inteiro num.
*/
#include <stdio.h>

int digitos (int num){
    int num_digitos = 1;
    while (num/10 != 0){
        num = num/10;
        num_digitos++;
    }
    return num_digitos;
}
int main() {
	int input;
    scanf("%d", &input);
    int resposta = digitos(input);
    printf("%d", resposta);
    return 0;
}
