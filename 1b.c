#include<stdio.h>
int main()
{
    int a, b;
    printf(" enter first num:");
    scanf("%d", &a);

    printf("enter second num:");
    scanf("%d", &b);

    a=(a+b);
    b=(a-b);
    a=(a-b);

   printf("\n after swapping-");
   printf("\n first num will be:%d",a);
   printf("\n second num will be:%d",b);
    return 0;
}
