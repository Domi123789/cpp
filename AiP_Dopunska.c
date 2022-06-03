#include <stdio.h>

int main()
{
    int masa=1, suma = 0, brSanduka=0;

    while (masa)
    {
        printf ("Unesi masu\n");
        scanf ("%d", &masa);
        suma+=masa;
        if (suma > 1000)
        {
            printf("novi sanduk\n");
            brSanduka++;
            suma=masa;
        }
    }
    printf ("%d", brSanduka);
}
