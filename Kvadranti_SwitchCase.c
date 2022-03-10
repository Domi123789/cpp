#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf ("Unesite kvadrant:\n");
    scanf ("%d", &a);

    switch (a)
    {
    case 1:
        printf ("+ +");
        break;
    case 2:
        printf ("- +");
        break;
    case 3:
        printf ("- -");
        break;
    case 4:
        printf ("+ -");
        break;
    default:
        printf ("Nepostojeci kvadrant");
    }

    return 0;
}
