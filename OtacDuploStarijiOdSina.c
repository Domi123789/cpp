#include <stdio.h>
#include <stdlib.h>

int main()
{
    int otac;
    int sin;

    printf("Unesi koliko godina ima otac:\n");
    scanf("%d",&otac);
    printf("Unesi koliko godina ima sin:\n");
    scanf("%d", &sin);

    int x = otac - sin*2;
    printf ("Otac ce biti duplo stariji od sina za:\n%2.d", x);


    return 0;


}
