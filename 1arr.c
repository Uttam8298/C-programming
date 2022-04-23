#include <stdio.h>
#define N 7

int main()
{
    int arr[N];
    float avg;
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < N; i++)
        avg += arr[i];

    avg /= N;

    printf("The average of the %d numbers is: %f\n", N, avg);
}