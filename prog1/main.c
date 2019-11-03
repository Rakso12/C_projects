#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float wartosc = 0 , pole_kwadratu = 0, pole_kola = 0;
    printf("Podaj wartosc \n");
    scanf("%f",&wartosc);

    pole_kwadratu = pow(wartosc,2);
    printf("Pole kwadratu = %f \n",pole_kwadratu);

    pole_kola = 3.14 * pow(wartosc,2);
    printf("Pole kola = %f",pole_kola);

    return 0;
}
