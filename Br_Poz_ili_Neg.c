#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a;

    printf("Unesite cijeli broj\n");
    scanf("%d", &a);

   if(a < 0)
   {
       printf("Broj je negativan");
   }

   else if (a > 0)
   {
       printf("Broj je pozitivan");
   }
   else
   {
       printf("Broj je jednak nuli");
   }

    return 0;
}
