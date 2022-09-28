#include <stdio.h>
#include <stdlib.h>

int f (int a){
    return a==1?1:a+f(a-1);
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", f(n));
}

