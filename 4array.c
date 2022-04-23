#include<stdio.h>
int main()
{
    int n, i, e;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    int a[n+1];
    printf("enter numbers to insert into sorted array:",n);
    for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("enter element to insert into sorted array:");
    scanf("%d", &e);
    i=n-1;
    while(e<a[1] && i>=0)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=e;
    printf("sorted array with inserted element:");
    for(i=0; i<n+1; i++)
    printf("%d",a[i]);
    return 0;
}
