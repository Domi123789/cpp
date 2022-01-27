#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stupovi;
    int razmakIzmeduStupova;
    int sirinaStupa;

    printf("Unesi broj stupova veci od jedan:\n");
    scanf("%d", &stupovi);
    printf("Unesi kolika je ralika izmedu stupova, ali da bude izmedu 10 i 30 metara:\n");
    scanf("%d", &razmakIzmeduStupova);
    printf("Unesi sirinu stupca, ali da bude izmedu 10 i 50 centimetara:\n");
    scanf("%d", &sirinaStupa);

    int razmakIzmeduPrvogIZadnjegStupa = (stupovi-2) * sirinaStupa + (stupovi-1)*razmakIzmeduStupova*100;
    printf("Razmak ce biti:\n%d", razmakIzmeduPrvogIZadnjegStupa);

    return 0;

}
