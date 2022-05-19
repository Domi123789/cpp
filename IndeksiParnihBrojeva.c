#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[1000],x;

    printf ("Koliko ima elemenata u polju?");
    scanf("%d",&x);
    for (int i=0; i<x; i++)
    {
        scanf("%d",&n[i]);
        if(n[i]%2==0) printf("%d ",i);
    }
}
