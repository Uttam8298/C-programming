#include <stdio.h>

int main()
{
    char A[6] = "Uttam", B[6] = "Kumar", C[11];

    for (int i = 0; i < 5; i++)
        C[i] = A[i];

    for (int i = 0; i < 5; i++)
        C[i + 5] = B[i];

    printf("Concatenated string: %s\n", C);
    return 0;
}