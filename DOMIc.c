#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Napi�i funkc za slijedno pretrazivanje 1D polja

u glavnoj fukciji treba generirati poulje od n slu�ajnih cijelih brojeva iz intervala pod 1 do 100

s pomo�u funkcije tra�i ispi�e se indeks prve pojave elementa koji ima vrijendost iz intervala od 8 do 10
ako takva vrijenodst nije sadr�ana ni u jednom elementu ispi�e se -1 */

int trazi(int A[], int n){
    int i;
    for (i=0; i<n; i++){
        if (A[i]>=8&&A[i]<=10)
                return i;

    }
return -1;
}

int main()
{
    int i,n;
    int x[50];
    time_t t;

    printf("Dem upisi koliko brojeva os");
    scanf ("%d", &n);

    srand((unsigned) time(&t));
    for (i=0;i<n;i++)
    {
        x[i]=rand() % 100;

    }


    for (i=0;i<n;i++)
    {
        printf ("%d\t", x[i]);
    }


    printf("\n%d",trazi(x,n));

}
