#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf ("Unesi broj sekundi\n");
    scanf ("%d", &a);
    printf ("Unesi broj minuta\n");
    scanf ("%d", &b);

    if (a > 59)
    {
        printf ("Neispravan unos");
    }
    else
    {
        float a1 = (float) a/3600;
        float b1 = (float) b/60;
        float sati = a1 + b1;
        printf ("Ukupno vrijeme u satima je %.2f", sati);
    }

    return 0;
}
