#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a1;
    int b,b1;

    printf ("Unesite prvi broj:\n");
    scanf ("%d", &a);
    printf ("Unesite drugi broj:\n");
    scanf ("%d", &b);

    if (a%10<((a/10)%10))
        a1 = a%10;
    else
        a1 = (a/10)%10;
     if (b%10<((b/10)%10))
        b1 = (b/10)%10;
    else
        b1 = b%10;

    int c = a1*10+b1;
    printf ("Novi broj je %d\n", c);

    return 0;

}
