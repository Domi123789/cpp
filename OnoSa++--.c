#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a= 4;
    int b= 3;

    int x= ++b;
    int y=a--;
    printf("%d %d", a,b);

    return 0;
}
