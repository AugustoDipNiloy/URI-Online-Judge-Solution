#include<stdio.h>
int main ()
 {
     int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
     scanf("%d",&a);
   b=a/100;
   c=a%100;
   d=c/50;
   e=c%50;
   f=e/20;
   g=e%20;
   h=g/10;
   i=g%10;
   j=i/5;
   k=i%5;
   l=k/2;
   m=k%2;
   n=m/1;
   printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,b,d,f,h,j,l,n);
    return 0;
}
