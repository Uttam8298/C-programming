#include<stdio.h>
int main()
{
    int n, a, b, c, d, e, sum;

    printf("enter a five digit num:");
    scanf("%d", &n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    sum=(a+b+c+d+e);
    printf("sum of digits:%d", sum);
    return 0;
}
