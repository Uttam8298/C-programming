#include<stdio.h>
int main(int argc, char const *argv[])
{
    float l, b, r, peri,area;
    printf("length and breath:\n");
    scanf("%f%f",&l,&b);
    peri=2*(l+b);
    area=l*b;
    printf("peri is %f\n area is %f\n",peri, area);
    printf("radius:\n");
    scanf("%f",&r);
    peri=2*3.14*r; 
    area=3.14*r*r;
    printf("area is %f\n peri is %f",area,peri);
    return 0;
}
