#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rt;
    float rf;

    printf ("Polumjer fontane je:\n");
    scanf ("%f", &rf);
    printf ("Polumjer travnjaka je:\n");
    scanf ("%f", &rt);
    float PovrsinaFontane = rf*rf*3.14159;
    float PovrsinaTravnjaka = rt*rt*3.14159;
    printf("Povrsina travnjaka je %.0f",PovrsinaTravnjaka-PovrsinaFontane);

    return 0;
}
