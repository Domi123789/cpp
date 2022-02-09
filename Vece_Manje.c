#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf ("Unesite tri broja\n");
    scanf ("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf ("Broj %d koji ste unijeli je najveci\n", a);
    }
    else if ( b > a && b > c)
    {
        printf ("Broj %d koji ste unijeli je najveci\n", b);
    }
    else
    {
        printf ("Broj %d koji ste unijeli je najveci\n", c);
    }

    if (a < b && a < c)
    {
        printf ("Broj %d koji ste unijeli je najmanji\n", a);
    }
    else if (b < a && b < c)
    {
        printf ("Broj %d koji ste unijeli je najmanji\n", b);
    }
    else
    {
        printf ("Broj %d koji ste unijeli je najmanji\n", c);
    }

    return 0;
}
