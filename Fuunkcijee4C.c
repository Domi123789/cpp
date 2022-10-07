#include <stdio.h>

int kupit (int min, int max, int s, int c){
    int zavrsna_cijena = s*(100+c)/100;

    return zavrsna_cijena >=min && zavrsna_cijena <= max;

}

int main()
{
    int min, max, s,c;

    printf ("Min cijena:");
    scanf("%d", &min);
    printf ("Max cijena:");
    scanf("%d", &max);
    printf ("cijena dionica:");
    scanf("%d", &s);
    printf ("Za koliko posto se promijenila cijena:");
    scanf("%d", &c);

    if (kupit(min, max, s, c)) printf ("Kupit ce dionice");
    else printf ("Nece kupit dionice");
}
