#include <stdio.h>

int GCD(int a, int b)
{
	int gcd;
	for (int i = 1; i < (a < b ? a : b); i++)
		if ((a % i == 0) && (b % i == 0))
			gcd = i;

	return gcd;
}
int main()
{
	int a = 38, b = 57;
	printf("The GCD for %d and %d is %d\n", a, b, GCD(a, b));
	return 0;
}