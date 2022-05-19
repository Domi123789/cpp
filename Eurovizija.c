#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bod, sum=0;

    for (int i=0; i <10; i++)
       {
        scanf("%d", &bod);
        sum+=bod;
       }

    printf ("Zbroj je: %d\n", sum);
    float prosjek= (float)sum/10;
    printf ("%.2f", prosjek);

    return 0;
}
