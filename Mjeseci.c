#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf ("Unesite broj mjeseca:\n");
    scanf ("%d", &a);

    switch (a)
    {
    case 1:
        printf ("To je mjesec sijecanj.\n");
        break;
    case 2:
        printf ("To je mjesec veljaca.\n");
        break;
    case 3:
        printf ("To je mjesec ozujak.\n");
        break;
    case 4:
        printf ("To je mjesec travanj.\n");
        break;
    case 5:
        printf ("To je mjesec svibanj.\n");
        break;
    case 6:
        printf ("To je mjesec lipanj.\n");
        break;
    case 7:
        printf ("To je mjesec srpanj.\n");
        break;
    case 8:
        printf ("To je mjesec kolovoz.\n");
        break;
    case 9:
        printf ("To je mjesec rujan.\n");
        break;
    case 10:
        printf ("To je mjesec listopad.\n");
        break;
    case 11:
        printf ("To je mjesec studeni.\n");
        break;
    case 12:
        printf ("To je mjesec prosinac.\n");
        break;
    default:
        printf("Unijeli ste krivi broj.\n");
    }




    if (a==1 || a ==3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
    {
        printf ("Mjesec ima 31 dan.");
    }
    else if (a==2)
    {
        printf ("Mjesec ima 28/29 dana.");
    }
    else if (a == 4 || a == 6 || a == 9 || a == 11)
    {
        printf ("Mjesec ima 30 dana.");
    }
    else
    {
        printf ("Unijeli ste krivi broj.");
    }

    return 0;
}
