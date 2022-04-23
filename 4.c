#include<stdio.h>
int main()
{
    float a,b,c,d,e,aggr,per;
    printf("enter the marks obtained by the students in 5 subject :\n");
    scanf("%f%f%f%f%f", &a, &b,&c, &d, &e);
    aggr=(a+b+c+d+e);
    per=(aggr*100)/500;
    printf("aggregate marks : %0.2f\npercentage marks : %0.2f\n",aggr,per);
     return 0;
}
