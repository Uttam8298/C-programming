#include <stdio.h>

int main()

{
    int a = 16, b = 18, temp, rem;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    rem = a;
    while (1)
    {
        temp = rem;

        if (b % rem != 0)
            rem = b % rem;
        else
            break;

        b = temp;
    }

    printf("HCF: %d\n", rem);
}
