#include <stdio.h>
#include <math.h>

int main()
{
    int num = 00111;
    int sum = 0;

    int exp = 0;
    int rem = num % 10;
    do
    {
        rem = num % 10;

        sum += rem * pow(2, exp);
        exp++;
    } while (num /= 10);

    printf("DECIMAL: %d\n", sum);
    return 0;
}