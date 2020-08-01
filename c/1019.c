#include<stdio.h>
int main ()
 {
     int A,B,C,D,E
     
     ;
     scanf("%d",&A);
     B=A/60;
     C=A%60;
     D=B/60;
     E=B%60;
    printf("%d:%d:%d\n",D,E,C);
    return 0;
}
