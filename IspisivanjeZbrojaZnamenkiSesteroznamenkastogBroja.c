#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf ("Unesi sesteroznamenkasti broj:\n");
    scanf ("%d", &a);
    int zbrajanje = a%10+(a/10)%10+(a/100)%10+(a/1000)%10+(a/10000)%10+(a/100000)%10+(a/1000000);
    printf ("%d", zbrajanje);

    return 0;
}
