#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wysokosc=0;

    printf("Podaj wysokosc trojkata\n");
    scanf("%d",&wysokosc);

    for(int i=0; i<wysokosc; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}
