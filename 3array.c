#include<stdio.h>
int main()
{
    int n, i, j;
    printf("enter no. of elements in array\n");
    scanf("%d", &n);
    int a[n];
    printf(" enter the numbers:\n",n);
    for( i=0; i<n; i++)
    scanf("%d",&a[i]);
    for( i=0; i<n; i++)
    {
        j=0;
        while (j<n-1)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            j++;
        }
        
    }
    printf("sorted array\n");
        for(i=0; i<n; i++)
        printf("%d",a[i]);
    return 0;
}
