#include <stdio.h>
#include <stdlib.h>
int genrRand(int lower, int upper)
{
  return (rand() % (upper - lower + 1)) + lower;
}
void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high)
{
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}
void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);

    quickSort(array, pi + 1, high);
  }
}
void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
int main()
{
  int lower = 0, upper = 100;
  int array[20];
  int size = 20;

  for (int i = 0; i < size; i++)
  {
    array[i] = genrRand(lower, upper);
  }
  display(array, size);

  quickSort(array, 0, size - 1);

  printf("The Sorted array:\n");
  display(array, size);
}
