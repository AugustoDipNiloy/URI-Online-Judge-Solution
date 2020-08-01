#include<stdio.h>
int main ()
 {
     double A,B,D;
     char x;

    scanf("%s%lf%lf",&x,&A,&B);
   D=(A+(0.15*B));
   printf("TOTAL = R$ %.2f\n",D);
    return 0;
}
