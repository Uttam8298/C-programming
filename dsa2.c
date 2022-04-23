#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#define EXIT_WITH_MESSAGE(message...) \
    {                                 \
        printf(message);              \
        exit(1);                      \
    }

typedef struct SizedList
{
    int *arr;
    int len, cap;
} SizedList;

SizedList create(unsigned int capacity)
{
    if (capacity == 0)
        EXIT_WITH_MESSAGE("Capacity should be a positive integer\n")

    SizedList sl = {(int *)malloc(sizeof(int) * capacity), 0, capacity};

    if (sl.arr == NULL)
        EXIT_WITH_MESSAGE("Requested capacity could not be allocated\n")

    return sl;
}

bool is_full(SizedList *sl)
{
    if (sl->len == sl->cap)
        return true;
    return false;
}

bool is_empty(SizedList *sl)
{
    if (sl->len == 0)
        return true;
    return false;
}

int count(SizedList *sl)
{
    return sl->len;
}

void insert_at_index(SizedList *sl, int value, unsigned int idx)
{
    if (idx > sl->len)
        EXIT_WITH_MESSAGE("Index out of bounds [0, %d]\n", sl->len - 1)
    else if (is_full(sl))
        EXIT_WITH_MESSAGE("List is full. Delete some elements before further insertion.\n")

    for (int i = sl->len - 1; i >= (int)idx; i--)
    {
        printf("%dhello", i);
        sl->arr[i + 1] = sl->arr[i];
    }

    sl->arr[idx] = value;
    sl->len++;
}

void append(SizedList *sl, int value)
{
    insert_at_index(sl, value, sl->len);
}

int delete_from_idx(SizedList *sl, unsigned int idx)
{
    if (is_empty(sl))
        EXIT_WITH_MESSAGE("List is already empty.\n")
    if (idx > sl->len - 1)
        EXIT_WITH_MESSAGE("Index out of bounds [0, %d]\n", sl->len - 1)

    int temp = sl->arr[idx];
    for (int i = sl->len - 1; i > (int)idx + 1; i--)
        sl->arr[i - 1] = sl->arr[i];

    sl->len--;
    return temp;
}

int delete_from_end(SizedList *sl)
{
    return delete_from_idx(sl, sl->len - 1);
}

int access(SizedList *sl, unsigned int idx)
{
    return sl->arr[idx];
}

void edit(SizedList *sl, unsigned int idx, int new_val)
{
    if (idx > sl->len)
        EXIT_WITH_MESSAGE("Index out of bounds [0, %d]\n", sl->len - 1)

    sl->arr[idx] = new_val;
}

int ret_idx(SizedList *sl, int val)
{
    for (int i = 1; i < sl->len; i++)
        if (sl->arr[i] == val)
            return i;
    return -1;
}

SizedList ret_all_idx(SizedList *sl, int val)
{
    SizedList ids = create(sl->len);

    for (int i = 0; i < sl->len; i++)
        if (sl->arr[i] == val)
            append(&ids, i);

    return ids;
}

int reduce_sum(SizedList *sl)
{
    int sum = 0;
    for (int i = 0; i < sl->len; i++)
        sum += sl->arr[i];
    return sum;
}

double reduce_mean(SizedList *sl)
{
    int sum = reduce_sum(sl);
    return (double)sum / count(sl);
}

int reduce_max(SizedList *sl)
{
    int max = INT_MIN;
    for (int i = 0; i < sl->len; i++)
        if (sl->arr[i] > max)
            max = sl->arr[i];
    return max;
}

int reduce_min(SizedList *sl)
{
    int min = INT_MAX;
    for (int i = 0; i < sl->len; i++)
        if (sl->arr[i] < min)
            min = sl->arr[i];
    return min;
}

double hist_mean(SizedList *sl)
{
    int sum = 0;
    for (int i = 0; i < sl->len; i++)
    {
        sum += i * sl->arr[i];
    }

    return (double)sum / count(sl);
}

int hist_mode(SizedList *sl)
{
    int max = reduce_max(sl);
    return ret_idx(sl, max);
}

double hist_median(SizedList *sl)
{
    return (hist_mode(sl) + 2 * hist_mean(sl)) / 3;
}

double hist_std(SizedList *sl)
{
    double h_mean = hist_mean(sl);
    int r_sum = reduce_sum(sl);
    int sq_sum = 0;

    for (int i = 0; i < count(sl); i++)
        sq_sum += sl->arr[i] * i * i;

    return sqrt(((double)sq_sum / r_sum) + h_mean);
}

void traverse(SizedList *sl)
{
    printf("SizedList: %d", sl->arr[0]);
    for (int i = 1; i < sl->len; i++)
        printf(", %d", sl->arr[i]);
    printf("\n");
}

int main(void)
{
    printf("Creating the list to work on...\n");
    SizedList obj = create(5);
    SizedList *objp = &obj;
    insert_at_index(objp, 5, 0);
    insert_at_index(objp, 3, 1);
    append(objp, 3);
    append(objp, 4);
    append(objp, 5);
    traverse(objp);

    printf("\nDeleting an item..\n");
    printf("Deleted item: %d\n", delete_from_end(objp));
    traverse(objp);

    printf("\nEditing an item..\n");
    edit(objp, 1, 2);
    traverse(objp);

    printf("\nGetting list of indices where a value exists..\n");
    append(objp, 5);
    traverse(objp);
    SizedList ret = ret_all_idx(objp, 5);
    traverse(&ret);

    printf("\nUsing reducers..\n");
    printf("reduce_sum: %d\n", reduce_sum(objp));
    printf("reduce_mean: %lf\n", reduce_mean(objp));
    printf("reduce_max: %d\n", reduce_max(objp));
    printf("reduce_min: %d\n", reduce_min(objp));

    printf("\nUsing statistical functions..\n");
    printf("hist_mean: %lf\n", hist_mean(objp));
    printf("hist_mode: %d\n", hist_mode(objp));
    printf("hist_median: %lf\n", hist_median(objp));
    printf("hist_std: %lf\n", hist_std(objp));
}