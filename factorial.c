#include <stdio.h>

int factorial(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
		fact *= i;

	return fact;
}

int main()
{
	int num = 6;
	printf("Factorial of %d is %d\n", num, factorial(num));
	return 0;
}