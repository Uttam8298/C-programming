#include<stdio.h>
int main()
{
    float F,C;
    printf("enter fahrenheit temp\n");
    scanf("%f",&F);
    C=((F-32)*5)/9;
    printf("temp in celcius:%f",C);
   return 0;
}
