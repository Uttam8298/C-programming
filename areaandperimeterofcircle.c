#include<stdio.h>
int main()
{
    float r,area,peri;
    printf("enter radius of circle\n",r);
    scanf("%f",&r);
   
    area=3.14*r*r;
    printf("area of circle:%f",area);
    peri=2*3.14*r;
    printf("\nperimeter of circle:%f",peri);
    return 0;
}
