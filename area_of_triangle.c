
#include<stdio.h>
int main()
{
    float b, h, area;
    
    printf("Enter height of triangle\n"); 
    scanf("%f",&h);
    printf("Enter base of triangle\n");
    scanf("%f",&b);
    area=0.5*b*h;
    printf("Area of triangle:%4.1f",area);
    
    return 0;
}
