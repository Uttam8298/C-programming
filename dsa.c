
    
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

 

struct arrayADT
{
    int arr[MAXSIZE];
    int arrEnd;
};

 

void create(struct arrayADT *a)
{
    a->arrEnd = -1;
}

 

int isEmpty(struct arrayADT *a){
    if(a->arrEnd==-1)
        return 1;
    else
        return 0;
}

 

int isFull(struct arrayADT *a){
    if(a->arrEnd==MAXSIZE-1)
        return 1;
    else
        return 0;
}

 

int arrCount(struct arrayADT *a){
    return (a->arrEnd+1);
}

 

int accessArr(struct arrayADT *a,int idx){
    if(idx<0 || idx>a->arrEnd)
        return -30000;
    else
        return a->arr[idx];
}

 

int retFirstIdx(struct arrayADT *a,int val){
    for(int i=0;i<=a->arrEnd;i++){
        if(a->arr[i]==val)
            return i;
    }
    return -1;
}

 


void append(struct arrayADT *a, int val)
{
    if(a->arrEnd == MAXSIZE - 1)
        printf("\nNo more space!!!\n");
    else
    {
        a->arrEnd++;
        a->arr[a->arrEnd] = val;
    }
}

 

int deleteEnd(struct arrayADT *a)
{
    int temp;
    if(a->arrEnd < 0){
        printf("\nNo more items to delete!!!\n");
        temp=-30000;
    }
    else
    {
        a->arrEnd--;
        temp=a->arr[a->arrEnd + 1];
    }
    return temp;
}

 

void insert(struct arrayADT *a, int val, int idx)
{
    if (a->arrEnd == MAXSIZE - 1)
        printf("\nNo more space!!!\n");
    else
    {
        for (int i = a->arrEnd; i >= idx; i--)
            a->arr[i + 1] = a->arr[i];
        a->arr[idx] = val;
        a->arrEnd++;
    }
}

 

int deleteIdx(struct arrayADT *a, unsigned int idx)
{
    int temp;
    if(a->arrEnd < idx){
        printf("\nIndex out of range!!!\n");
        temp=-30000;
    }
    else
    {
        temp = a->arr[idx];
        for (int i = idx; i < a->arrEnd; i++)
        a->arr[i] = a->arr[i + 1];
        a->arrEnd--;
    }
    return temp;
}

 

void traverse(struct arrayADT *a)
{
    printf("\n");
    for (int i = 0; i <= a->arrEnd; i++)
        printf("%d ", a->arr[i]);

 

    printf("\n");
}

 

int main()
{
    struct arrayADT arr1, arr2;

 

    create(&arr1);
    create(&arr2);

 

    append(&arr1, 1);
    append(&arr1, 2);
    append(&arr1, 3);
    append(&arr1, 4);

 

    traverse(&arr1);

 

    insert(&arr1, 8, 1);
    insert(&arr1, 8, 1);
    insert(&arr1, 8, 1);

 

    traverse(&arr1);

 

    deleteEnd(&arr1);
    traverse(&arr1);

 

    deleteIdx(&arr1, 2);
    traverse(&arr1);

 

    printf("\n idx for 8 = %d\n",retFirstIdx(&arr1,8));

 

 return 0;
}