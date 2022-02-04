#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf ("Unesite iznos jedne stranice?\n");
    scanf ("%d", &a);
    printf ("Unesite iznos druge stranice?\n");
    scanf ("%d", &b);

    if (a==b)
    {
        int povrsinaKvadrata = a * 4;
        printf ("Ovo je kvadrat i njegova povrsina je %d", povrsinaKvadrata);
    }
    else
    {
        int opsegPravokutnika = 2*a + 2*b;
        printf ("Ovo je pravokutnik i njegov opseg je %d", opsegPravokutnika);
    }

    return 0;
}
