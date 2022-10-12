#include <stdio.h>
#include <math.h>

float retx1 (float a, float b, float c){

    return (-b+sqrt(b*b-4*a*c))/(2*a);
}

float retx2 (float a, float b, float c){

    return (-b-sqrt(b*b-4*a*c))/(2*a);
}

int main ()
{
    float a,b,c;
    printf ("Unesi 3 broja: ");
    scanf ("%f %f %f", &a, &b, &c);

    printf ("x1: %.2f\n", retx1(a,b,c));
    printf ("x2: %.2f", retx2(a,b,c));
}
