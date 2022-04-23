#include <stdio.h>

void fab(int n)
{	
	int i,a=0,b=1,next=0;
	for  (i=1;i<=n;++i) 
	{
        printf("%d, ",a);
        next=a+b;
        a=b;
        b=next;
    }
}

int main()
{
	int n;
    printf("Enter number of term:\n ");
    scanf("%d", &n);

    printf("Fibonacci Series:");
    fab(n);
    
	return 0;
}