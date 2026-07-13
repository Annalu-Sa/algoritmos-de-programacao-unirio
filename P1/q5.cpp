#include<stdio.h>
#include<stdbool.h>

int main(){
    int plats; //plataformas
    scanf("%d", &plats);

    int alturas[plats + 1];
    alturas[0] = 0;

    for(int pos = 1; pos <= plats; pos++)
        scanf("%d", &alturas[pos]);
    bool alcanca[plats + 1];
    alcanca[0] = true;
    alcanca[1] = (alturas[1] <= 2);

    for(int pos = 2; pos <= plats; pos++){
        if(alcanca[pos - 1] && alturas[pos] - alturas[pos-1] <= 2)
            alcanca[pos] = true;
        else alcanca[pos] = false;
    }
    if(alcanca[plats])
        printf("OK\n");
    else printf("Impossível\n");
    return 0;
}