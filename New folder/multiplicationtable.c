#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a num\n");
    scanf("%d",&num);
    printf("multiplication table of %d is as follow\n", num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d=%d\n", num, i, num*i);
    }
    
    return 0;
}