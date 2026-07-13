#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[1001];
    scanf("%s", str);

    for(int pos = 0; pos < strlen(str); pos ++){
        if(pos % 2 == 0) str[pos] = tolower(str[pos]);
        else str[pos] = toupper(str[pos]);
    }
    printf("%s\n", str);
    return 0;
}
