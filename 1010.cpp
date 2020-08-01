#include<stdio.h>
int main ()
 {
   int A,B,D,E;
   float C,F,G;
    scanf("%d%d%f%d%d%f",&A,&B,&C,&D,&E,&F);
   G=((B*C)+(E*F));
    printf ("VALOR A PAGAR: R$ %.2f\n",G);
    return 0;
}
