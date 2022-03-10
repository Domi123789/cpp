#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;

    printf ("Unesite cijeli broj\n");
    scanf ("%d", &a);

    if (a % 2 != 0)
    {
         printf("Broj je neparan");
    }

    if (a % 2 ==0)
    {
        printf ("Broj je paran");
    }


    return 0;

}
