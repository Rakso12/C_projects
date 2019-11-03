#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba_1 = 0, liczba_2 = 0,wynik = 0;

    printf("Podaj pierwsza liczbe \n");
    scanf("%f",&liczba_1);

    printf("Podaj druga liczbe \n");
    scanf("%f",&liczba_2);

    if(liczba_1 == 0 || liczba_2 == 0)
        printf("Jedna z liczb jest rowna zero!");
    else
    {
        wynik = liczba_1/liczba_2;
        printf("Dzielenie podanych liczb jest rowne: %f",wynik);
    }
    return 0;
}
