#include<stdio.h>
int main(int argc, char const *argv[])
{
    float m1,m2,m3,m4,m5,aggr,per;
    printf("enter marks\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    aggr=m1+m2+m3+m4+m5;
    per=aggr/5;
    printf("aggr is%f",aggr);
    printf("per is %f",per);
    return 0;
}
