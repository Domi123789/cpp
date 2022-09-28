#include <stdio.h>
#include <stdlib.h>

int brojevi (int n){
    while (n%3!=0) n--;
    if (n<3) return 0;
    else if (n==12) brojevi(n-3);
        else return n + brojevi(n-3);
}

int main()
{
    int a;
    scanf ("%d", &a);
    printf ("%d", brojevi(a));

}



