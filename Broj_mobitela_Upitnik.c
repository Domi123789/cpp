#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int cc;
    int abc; //2
    int def; //3
    int ghi; //4
    int jkl; //5
    int mno; //6
    int pqrs; //7
    int tuv; //8
    int wxyz; //9

    switch (cc)
    {
    case 2:
        printf ("Unesite broj");
        scanf ("%d",&abc);
        switch(abc)
        {
            case 1:
        printf("A");

            case 2:
        printf ("B");


            case 3:
        printf ("C");
        break;
            default:
                printf ("Krivo");
        }
    case 3:
    printf("Unesi broj");
    scanf ("d", &def);
    switch(def)
    {
        case 1:
        printf ("D");

        case 2:
        printf ("E");

        case 3:
        printf ("F");
    break;
        default:
            printf ("Krivo");
    }

     case 4:
    printf ("Unesi broj\n");
    scanf ("%d", &ghi);
    switch (ghi)
    {
        case 1:
        printf ("G");

        case 2:
        printf("H");

        case 3:
        printf ("I");
        break;
            default:
            printf ("Krivo");
    }
     case 5:
    printf ("Unesi broj\n");
    scanf ("%d", &jkl);
    switch (jkl)
    {
        case 1:
        printf ("J");

        case 2:
        printf ("K");

        case 3:
            printf ("L");
        break;
            default:
            printf ("Krivo");
    }
     case 6:
    printf ("Unesi broj\n");
    scanf ("%d", &mno);
    switch (mno)
    {
        case 1:
        printf ("M");

        case 2:
        printf ("N");

        case 3:
        printf ("O");
        break;
            default:
            printf ("Krivo");
    }
     case 7:
    printf ("Unesi broj\n");
    scanf ("%d", &pqrs);
    switch (pqrs)
    {
        case 1:
        printf ("P");

        case 2:
        printf ("Q");

        case 3:
        printf ("R");

        case 4:
        printf ("S");
        break;
            default:
            printf ("Krivo");
    }
     case 8:
    printf ("Unesi broj\n");
    scanf ("%d", &tuv);
    switch (tuv)
    {
        case 1:
        printf ("T");

        case 2:
        printf ("U");

        case 3:
        printf ("V");
        break;
            default:
            printf ("Krivo");
    }
     case 9:
    printf ("Unesi broj\n");
    scanf ("%d", &wxyz);
    switch (wxyz)
    {
        case 1:
        printf ("W");

        case 2:
        printf ("X");

        case 3:
        printf ("Y");

        case 4:
        printf ("Z");
        break;
            default:
            printf ("Krivo");
    }


    }
}
