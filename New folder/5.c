#include <stdio.h>

int main()
{
    int num = 6, fact = 1;

    for (int i = 1; i <= num; i++)
        fact *= i;

    printf("FACTORIAL: %d\n", fact);
}