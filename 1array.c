#include<stdio.h>
int main()
{ int  i, n;
float sum=0.0, avg;
   printf("enter the value of n\n");
   scanf("%d",&n);
   int arr[n];
   printf("enter the elements of array\n");
   for(i=0;i<n;i++)
   {scanf("%d",&arr[i]);
   
   }
   for(i=0;i<n;i++)
   { sum+=arr[i];}
   avg=(sum/n);
   printf("the average is %0.2f",avg);
    return 0;
}
