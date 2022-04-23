#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int num,index=0;
    printf("enter a no.\n");
    scanf("%d",&num);
    while(index<num)
    {
        printf("%d\n",index);
        index=index+2;
    }
    return 0;
}
