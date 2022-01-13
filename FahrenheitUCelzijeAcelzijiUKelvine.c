#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F;
    float C;
    float K;

    printf("Unesite Fahrenheite:\n");
    scanf("%f", &F);

   C=((float)F-32)*5/9;
     K= C + 273.15;
    printf("%.2f\n", C);
    printf("%.2f\n", K);

    return 0;
}
