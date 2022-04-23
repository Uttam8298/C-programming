#include <stdio.h>
#include <math.h>

int main()
{
    int n = 7, sum = 0;

    for (int i = 0; i < n; i++)
        sum += pow(10, i);

    printf("%d\n", sum);
    return 0;
}