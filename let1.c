#include<stdio.h>
int main(int argc, char const *argv[])
{
    float bs,da,hra,gs;
    printf("basic salary\n");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("basic salary is %f\n",bs);
    printf("%f\n",da);
    printf("%f\n",hra);
    printf("%f\n",gs);
    return 0;
}
