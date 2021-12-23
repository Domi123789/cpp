#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int F1;
    int F2;
    printf("Unesite iznos dvije sile\n");
    scanf("%d %d", &F1, &F2);
    printf("Rezultantna sila za sile istog smjera iznosi: %d N\n", F1+F2);
    printf("Rezultanta sila za sile suprotnog smjera iznosi: %d N\n", F1-F2);
    printf("Rezultanta sila za sile pod pravim kutem iznosi: %.2f N\n", (float) sqrt(F1*F1+F2*F2));

    return 0;
}
