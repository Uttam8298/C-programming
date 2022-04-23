#include <stdio.h>
#include <math.h>

int main()
{
    int n = 50;
    float sum = 0;

    for (int i = 1; i <= 50; i++)
    {
        sum += 1.0 / i;
    }

    printf("%.2f\n", sum);
}