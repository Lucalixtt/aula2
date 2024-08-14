#include <stdio.h>
#include <stdlib.h>

int main (){
   float p1;
   float p2;

   float m;

   printf ("digite o valor da sua p1");
   scanf ("%f:", &p1);
   printf ("digite o valor da sua p2");
   scanf ("%f:", &p2);

   m = (p1 + p2)/2;

   printf ("A sua meia é %f\n", m);

   if(m>=5){
        printf ("voce esta aprovado!");
   }
   else {
    printf ("voce esta reprovado");

   }
   return 0;
}
