#include<stdio.h>
int main ()
 {
     double A,B,C,D,E,F,G,H;

    scanf("%lf%lf%lf",&A,&B,&C);
   D=0.5*A*C;
   E=3.14159*C*C;
   F=0.5*C*(A+B);
   G=B*B;
   H=A*B;
   printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",D,E,F,G,H);
    return 0;
}
