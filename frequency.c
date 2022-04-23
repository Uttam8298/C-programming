#include<stdio.h>
int main()
{ int a[5], i, key, count=0;
printf("enter  number of elements in array:");
for(i=0; i<5; i++)
{ 
    scanf("%d",&a[i]);
}
    printf("enter the number to be searched:");
    scanf("%d",&key);
    for (i=0; i<5; i++)
    {
        if (a[i]==key)
        {
        printf("%d has appeared at position %d in the array\n", key, i+1);
        count++;
        }
    }
    printf("%d has appeared %d times in the array\n", key, count);
    return 0;
}
