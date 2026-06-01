/*
Crie uma struct Retangulo para representar retângulos, armazenando o comprimento de seus lados 
(inteiros), e implemente as funções
int perimetro( Retangulo ret );
int area( Retangulo ret );
bool e_quadrado( Retangulo ret );
que, respectivamente, calcula o perímetro de ret, calcula a área de ret, e determina se ret é um quadrado.
*/ 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Retangulo{
    int lado1;
    int lado2;
};

int perimetro(Retangulo ret){
    return ret.lado1*2 + ret.lado2*2;
}

int area(Retangulo ret){
    return ret.lado1*ret.lado2;
}

bool e_quadrado(Retangulo ret){
    return  ret.lado1 == ret.lado2;
}

int main() {
    Retangulo ret;
    char sim_nao[30];
    
    scanf("%d %d", &ret.lado1, &ret.lado2);

    if(e_quadrado(ret)){
        strcpy(sim_nao,"SIM");
    }else{
        strcpy(sim_nao,"NAO");
    }
    printf("Perimetro: %d\n Area: %d\n E quadrado? %s", perimetro(ret), area(ret), sim_nao);
    
    return 0;
}