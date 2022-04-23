#include<stdio.h>
int main()
{
    int n, a, b, c, d, e, sum;

    printf("enter a five digit num:");
    scanf("%d", &n);
    a=n%10;
    n=n/10;
    sum=a;
    b=n%10;
    n=n/10;
    sum=sum*10+b;
    c=n%10;
    n=n/10;
    sum=sum*10+c;
    d=n%10;
    n=n/10;
    sum=sum*10+d;
    e=n%10;
    sum=sum*10+e;
    printf("reversed no. = %d\n", sum);
    return 0;
}
