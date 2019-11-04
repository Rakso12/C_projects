#include <stdio.h>
#include <stdlib.h>

int main()
{
    float wynik=0,suma=0,liczba;
    int licznik=0;

    while(liczba!=0)
    {
        printf("Podaj liczbe: \n");
        scanf("%f",&liczba);
        suma+=liczba;
        licznik++;
    }
    wynik = suma/(licznik-1);
    printf("Srednia to: %f",wynik);

    return 0;
}
