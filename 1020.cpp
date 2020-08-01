#include<stdio.h>
int main ()
 {
     int A,B,C,D,E;
     scanf("%d",&A);
     B=A/365;
     C=A%365;
     D=C/30;
     E=C%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",B,D,E);
    return 0;
}
