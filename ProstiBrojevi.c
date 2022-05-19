#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, prost=0, count=0,najveci;


    for (i=100; i <1000; i++)
    {
        prost=0;
        for (int k=2; k<i/2+1; k++){
            if(i%k==0) prost=1;
        }

        if(!prost) {count++; najveci=i;}

    }
    printf("%d\n%d",count,najveci);

    return 0;
}
