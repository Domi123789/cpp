#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf ("Unesi prvi broj:\n");
    scanf ("%d", &x);
    printf ("Unesi drugi broj:\n");
    scanf ("%d", &y);

    if (y > x*2)
    {
        int t=x;
        x = y;
        printf ("Broj x je sada %d\n", x);
        y = t;
        printf ("Broj y je sada %d", y);
    }
    else
    {
        printf ("Pogresno upisani brojevi ");
    }


    return 0;
}
