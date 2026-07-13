#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int matriz[N][N];

    for(int lin = 0; lin < N; lin++){
        for(int col = 0; col < N; col++){
            scanf("%d", &matriz[lin][col]);
        }
    }
    int produto[N]; //vetor para armazenar o produto

    for(int col = 0; col < N; col++){
        produto[col] = 1; // inicialização necessária para evitar lixo de memória
        for(int lin = 0; lin < N; lin++){
            produto[col] *= matriz[lin][col];
        }
        printf("Coluna %d:%d\n", col + 1, produto[col]);
    }
    return 0;
}