#include <stdio.h>

int main()
{
    char A[6] = "hello", B[6];

    for (int i = 0; i < 5; i++)
        B[i] = A[i];

    printf("Copied string: %s\n", B);
    return 0;
}