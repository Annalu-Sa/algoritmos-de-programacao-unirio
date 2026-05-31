/*
2.8 da Lista do Jefferson

Os dias do ano podem ser definidos de forma contínua. Por exemplo: 
01/01 é o 1º dia do ano, 05/01 é o 5º dia do ano, e 03/02 é o 34º dia do ano.
Leia três valores inteiros d, m, e a e informe o dia do ano correspondente à data d/m/a.
*/

#include <stdio.h>

int main() {
	int d, m, a, total = 0;
    printf("Coloque o valor da data, mes e ano, nessa ordem:");
    scanf("%d %d %d", &d, &m, &a);
    
    //Vetor do ano padrão
    int dias_mes[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //Caso o ano seja bissexto
    if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0){
            dias_mes[1]=29;
    }
    //Contagem dos meses que se foram:
    for(int i = 0; i < m-1; i++){
        total += dias_mes[i];
    }
    //Contagem dos dias do mês:
    for(int i = 0; i < d-1; i++){
        total++;
    }
    printf("\nO dia da data correspondente: %d", total);
    return 0;
}
