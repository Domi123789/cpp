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
        }

        {
            case 2:
        printf ("B");
        }
        {
            case 3:
        printf ("C");
        }
    case 3:
    printf("Unesi broj");
    scanf ("d", &def);
            
     case 4:
    printf ("Unesi broj\n");
    scanf ("%d", &ghi);
    switch (ghi)
    {
        case 1:
        printf ("G");
    }
    {
        case 2:
            printf("H");
    }
    {
        case 3:
            printf ("I");
            break;
    }

    }
}
