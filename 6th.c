#include <stdio.h>
#include <math.h>

int main()
{
    int n = 10, sum = 0;

    for (int i = 1; i <= n; i++)
        sum += pow(i, 2);

    printf("%d\n", sum);
    return 0;
}