#include <stdio.h>

int sum(int num)
{
    if (num != 0)
        return (num % 10 + sum(num / 10));
    else
        return 0;
}
int main()
{
    int num = 13247;
    printf("Sum of digits in %d is %d\n", num, sum(num));
}
