#include<stdio.h>
int main()
{
   int a, b, c;
   printf("enter first num:");
   scanf("%d", &a);

   printf("enter second num:");
   scanf("%d", &b);

   c=a;
   a=b;
   b=c;
   printf("\n after swapping-");
   printf("\n first num will be:%d",a);
   printf("\n second num will be:%d",b);
   return 0;

}





