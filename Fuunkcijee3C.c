#include <stdio.h>

char pobjednik (int a, int b)
{
    if ((a+b)%2==0){
        return 'Z';
    }
    else {
        return 'T';
    }

}

int main ()
{
    int a,b;
    printf ("Prvo unesi koliko je prstiju pokazala Tatjana, a onda Zvona:\n");
    scanf ("%d", &a);
    scanf ("%d", &b);

    printf ("Ako je Z, pobijedio je Zvona, a ako je T, pobijedila je Tatjana:  %c", pobjednik(a,b));
    return 0;
}
