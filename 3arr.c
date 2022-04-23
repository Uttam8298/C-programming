#include <stdio.h>
#define N 6
int main()
{
    int arr[N], temp, i, j;

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (i = N - 2; i >= 0; i--)
        for (j = 0; j <= i; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    printf("Sorted array: ");
    for (i = 0; i < N; i++)
        printf(" %d", arr[i]);

    return 0;
}