#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, sum=0, dist;

    printf("Unesite broj gradova:\n");
    scanf("%d", &N);

    while ( N - 1)
    {
        scanf ("%d", &dist);
        sum += dist;
    N--;}

    printf("%d", sum);

}
