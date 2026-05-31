/*
Leia dois horários, no formato de hora, minuto e segundo (h1:m1:s1, h2:m2:s2). 
Determine qual dos dois horários vem antes e calcule o intervalo entre eles, 
também no formato de hora, minuto e segundo (hh:mm:ss). Por exemplo, se o primeiro 
valor for 09:15:38 (h1 = 9, m1 = 15, s1 = 38), e o segundo valor for 15:27:40 
(h2 = 15, m2 = 27, s2 = 40), então o primeiro valor de hora vem antes e a diferença 
entre os dois é de 06:12:02.
*/

#include <stdio.h>

int main() {
	int h1, m1, s1, h2, m2, s2, dif_seg, dif_min, dif_hr;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

    //total em segundos
    int total1 = h1*3600 + m1*60 + s1,
        total2 = h2*3600 + m2*60 + s2;

    if(total1 < total2){
        dif_seg = total2 - total1;
        
        dif_min = dif_seg/60;
        dif_seg %= 60;
        
        dif_hr = dif_min/60;
        dif_min %= 60;
    }else{
        dif_seg = total1 - total2;
        
        dif_min = dif_seg/60;
        dif_seg %= 60;
        
        dif_hr = dif_min/60;
        dif_min %= 60;
    }
    printf("%d:%d:%d", dif_hr, dif_min, dif_seg);
}
