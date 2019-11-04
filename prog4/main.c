#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba_1=0,liczba_2=0,liczba_3=0;
    printf("Podaj pierwsza liczbe\n");
    scanf("%f",&liczba_1);
    printf("Podaj druga liczbe\n");
    scanf("%f",&liczba_2);
    printf("Podaj trzecia liczbe\n");
    scanf("%f",&liczba_3);

    if(liczba_1 > liczba_2 && liczba_1 > liczba_3) printf("najwieksza - %f", liczba_1);
    else if (liczba_2 > liczba_1 && liczba_2 > liczba_3) printf("najwieksza = %f",liczba_2);
    else printf("najwieksza - %f ", liczba_3);
    return 0;
}
