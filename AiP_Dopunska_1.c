#include <stdio.h>

int main()
{
    int a,b, sumA=0, sumB=0;

    printf ("Unesi prvi broj\n");
    scanf ("%d", &a);
    printf ("Unesi drugi broj\n");
    scanf ("%d", &b);

    while (a > 0)
    {
        sumA+=a%10;
        a/=10;
    }
    while (b > 0)
    {
        sumB+=b%10;
        b/=10;
    }
    if (sumA > sumB)
    {
        printf ("Veci je prvi broj");
    }
    else if (sumA < sumB)
    {
        printf ("Veci je drugi broj");
    }
    else
    {
        printf ("Brojevi su jednaki");
    }
}
