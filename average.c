#include<stdio.h>
int main()
{
    float a,b,c,d,e,avg;
    printf("Enter five number\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("the average is:%0.2f",avg);
    return 0;
}
