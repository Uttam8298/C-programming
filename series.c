#include <stdio.h>
#include <math.h>

int main()
{
    int n = 7;
    float sum = 0;

    for (int i = 1; i <= 2 * n - 1; i += 2)
        sum += pow(i, 2) / pow(i, 3);

    printf("SUM: %f\n", sum);
}