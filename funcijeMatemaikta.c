#include <stdio.h>

float Calc (float a, char O, float b){
    if (O =='-') return a-b;
    else if (O=='+') return a+b;
    else if (O=='*') return a*b;
    else if (O=='/') return a/b;

}

int main()
{
    float a,b;
    char O;

    printf ("Unesi 2 broja:\n");
    scanf ("%f %f", &a, &b);
    printf ("Koju matematicku operaciju zelis:");
    scanf(" %c", &O);

    printf ("%.2f", Calc(a,O,b));
}
