#include <stdio.h>

int main()
{
    char A[6] = "Uttam", B[8] = "Uttam";
    int len1 = 0, len2 = 0;

    while (A[len1] != '\0')
        len1++;

    while (B[len2] != '\0')
        len2++;
    
    if (len1 != len2)
    {
        printf("Strings are not equal!\n");
        return 0;
    }

    int lesser = len1 < len2 ? len1 : len2;

    for (int i = 0; i < lesser; i++)
    {
        if (A[i] != B[i])
        {
            printf("Strings are not equal\n");
            return 0;
        }
    }

    printf("Strings are equal\n");
    return 0;
}