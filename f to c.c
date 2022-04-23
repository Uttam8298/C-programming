#include<stdio.h>
int main(int argc, char const *argv[])
{
    float f,c;
    printf("fehrenheit\n"),
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("tempin celcius is %f",c);
    return 0;
}
