/*
2.9 da Lista do Jefferson

Leia as três notas e a quantidade de faltas de um aluno em uma disciplina e 
determine a situação do aluno. Utilize as seguintes regras:
As três notas devem estar valores inteiros entre 0 e 10 (apresente uma 
mensagem de erro em caso de nota inválida);
As notas possuem pesos 25%, 25%, e 50% (nesta ordem);
Alunos com pelo menos 8 faltas são reprovados por falta;
Alunos com menos de 8 faltas são aprovados se tiverem média 7,0 ou maior,
 e reprovados se tiverem média abaixo de 4,0; os demais alunos deverão 
 fazer prova final.
*/
#include <stdio.h>
int main() {
	int p1, p2, p3, falta;
    float nota = 0;

    scanf("%d %d %d %d", &p1, &p2, &p3, &falta);

    if((p1 >= 0 && p1 <= 10) && (p2 >= 0 && p2 <= 10) && (p3 >= 0 && p3 <= 10)){
        nota = 1.0f*((0.25*p1) + (0.25*p2) + (0.50*p3));
        if(nota < 7.0){
            printf("Reprovado por nota, com %.2f na media", nota);
        }else if(falta >= 8){
            printf("Reprovado por falta, com %d de faltas", falta);
        }
        else{
            printf("Aprovado com %.2f na media!", nota);
        }
    }else{
        printf("Nota invalida!");
    }return 0;
}
