#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf ("Unesite broj mjeseca:\n");
    scanf ("%d", &a);

    if(a > 0 && a < 2)
    {
        printf ("To je mjesec sijecanj.\n");
    }
    else if (a == 2)
    {
        printf ("To je mjesec veljaca.\n");
    }
    else if (a > 2 && a < 4)
    {
        printf ("To je mjesec ozujak.\n");
    }
    else if (a > 3 && a < 5)
    {
        printf ("To je mjesec travanj.\n");
    }
    else if (a > 4 && a < 6)
    {
        printf ("To je mjesec svibanj.\n");
    }
    else if (a > 5 && a < 7)
    {
        printf ("To je mjesec lipanj.\n");
    }
    else if (a > 6 && a < 8)
    {
        printf ("To je mjesec srpanj.\n");
    }
    else if (a > 7 && a < 9)
    {
        printf ("To je mjesec kolovoz.\n");
    }
    else if (a > 8 && a < 10)
    {
        printf ("To je mjesec rujan.\n");
    }
    else if (a > 9 && a < 11)
    {
        printf ("To je mjesec listopad.\n");
    }
    else if (a > 10 && a < 12)
    {
        printf ("To je mjesec studeni.\n");
    }
    else if (a > 11 && a < 13)
    {
        printf ("To je mjesec prosinac.\n");
    }
    else
    {
        printf ("Unijeli ste krivi broj.");
    }

    switch (a)
    {
    case 1:
        printf ("To je mjesec sijecanj.");
        break;
    case 2:
        printf ("To je mjesec veljaca.");
        break;
    case 3:
        printf ("To je mjesec ozujak.");
        break;
    case 4:
        printf ("To je mjesec travanj.");
        break;
    case 5:
        printf ("To je mjesec svibanj.");
        break;
    case 6:
        printf ("To je mjesec lipanj.");
        break;
    case 7:
        printf ("To je mjesec srpanj.");
        break;
    case 8:
        printf ("To je mjesec kolovoz.");
        break;
    case 9:
        printf ("To je mjesec rujan.");
        break;
    case 10:
        printf ("To je mjesec listopad.");
        break;
    case 11:
        printf ("To je mjesec studeni.");
        break;
    case 12:
        printf ("To je mjesec prosinac.");
        break;
    default:
        printf("Unijeli ste krivi broj.");
    }

    return 0;
}
