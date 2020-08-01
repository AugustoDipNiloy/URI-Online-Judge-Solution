#include<stdio.h>
int main ()
 {
   int A,B,C;

    scanf("%d%d%d",&A,&B,&C);
   if(A>B)
   {
      if(A>=C)
         printf("%d eh o maior\n",A);
      else
         printf("%d eh o maior\n",C);
   }
    else
   {
      if(B>C)
         printf("%d eh o maior\n",B);
      else
         printf("%d eh o maior\n",C);
   }
    return 0;
}
