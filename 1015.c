#include<stdio.h>
#include<math.h>
int main ()
 {
     double A,B,C,D,E;
     scanf("%lf%lf%lf%lf",&A,&B,&C,&D);
   E=sqrt(((C-A)*(C-A))+(D-B)*(D-B));
   printf("%.4f\n",E);
    return 0;
}
