#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    int a= x+y;
    int b= x-y;
    int c= x*y;
    int d= x/y;
    int e= x%y;

    printf("Zbrajanje = %d\n",a);
    printf("Oduzimanje = %d\n",b);
    printf("Mnozenje = %d\n",c);
    printf("Dijeljenje = %d\n",d);
    printf("Ostatak cjelobrojnog dijeljenja = %d\n",e);
    return 0;
}
