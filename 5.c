#include <stdio.h>

int main()
{
    int num, sum = 0;
    scanf("%d", &num);

    sum += num % 10;
    sum += num / 1000;

    printf("%d\n", sum);
    return 0;
}