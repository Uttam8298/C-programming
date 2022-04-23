#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return (n * factorial(n - 1));
}

int main()
{
    int num = 7;
    printf("The factorial is: %d\n", factorial(num));
}