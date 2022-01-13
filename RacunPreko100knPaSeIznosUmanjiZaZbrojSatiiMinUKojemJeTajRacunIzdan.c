#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Cijena;
    int Sati;
    int Minute;

    printf("Unesite cijenu racuna:\n");
    scanf("%d", &Cijena);
    printf("Unesite sate:\n");
    scanf("%d", &Sati);
    printf("Unesite minute:\n");
    scanf("%d", &Minute);
    if (Cijena > 100)
    {
        int zbrajanje = Sati + Minute;
        int KrajnjiRacun = Cijena - zbrajanje;
        printf ("%d", KrajnjiRacun);
    }
    else
    {
        int ZavrsniRacun = Cijena;
        printf ("%d", ZavrsniRacun);
    }

    return 0;
}
