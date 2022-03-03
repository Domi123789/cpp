#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf ("----------------------------------\n");
    printf ("|                                 |\n");
    printf ("|        1. kvadrat               |\n");
    printf ("|        2. pravokutnik           |\n");
    printf ("|        3. krug                  |\n");
    printf ("|                                 |\n");
    printf ("----------------------------------\n");

    int a;
    int b;
    int r;
    int opcija;

    printf ("Izaberi opciju: \n");
    scanf("%d", &opcija);




    switch(opcija)
    {
    case 1:
        printf ("Unesi broj a: \n");
        scanf("%d",&a);

        opcija = a*a;
        printf ("Povrsina kvadrata je %d", opcija);
        break;
    case 2:
        printf ("Unesi broj a: \n");
        scanf ("%d",&a);
        printf ("Unesi broj b: \n");
        scanf ("%d",&b);
        opcija = a*b;
        printf ("Povrsina pravokutnika je %d", opcija);
        break;
    case 3:
        printf ("Unesi polumjer kruga: \n");
        scanf("%d",&r);
        printf ("Povrsina kruga je %.2f", (float) r*r*3.14);
        break;
    default:
        printf("Krivo");
    }

    return 0;



}
