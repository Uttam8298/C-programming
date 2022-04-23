
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAXSIZE 100
struct arrayADT
{
    int arr[MAXSIZE];
    int arrEnd;
};
void edit(struct arrayADT *a,int idx,int newVal)//replaces the value at any index
{
    int i;
    a->arr[idx]=newVal ;
}
void create(struct arrayADT *a) //creates array
{
    a->arrEnd = -1;
}
int isEmpty(struct arrayADT *a)//checks if array is empty or not 
{
    if(a->arrEnd==-1)
        return 1;
    else
        return 0;
}
int isFull(struct arrayADT *a) //checks if array is full
{
    if(a->arrEnd==MAXSIZE-1)
        return 1;
    else
        return 0;
}
int arrCount(struct arrayADT *a) //returns the length of array
{
    return (a->arrEnd+1);
}
int accessArr(struct arrayADT *a,int idx) // returns the value of a particular index of array
{
    if(idx<0 || idx>a->arrEnd)
        return -30000;
    else
        return a->arr[idx];
}
int retFirstIdx(struct arrayADT *a,int val)//for any given value it return it's first occurence
{
    for(int i=0;i<=a->arrEnd;i++){
        if(a->arr[i]==val)
            return i;
    }
    return -1;
}
int retmanyIdx(struct arrayADT *a,int val) //returns all index
{
    int man;
    int i;
    for(i=0;i<=a->arrEnd;i++)
    {
        if(a->arr[i]==val)
        printf("%d found at %d\n",val,i);
    }
}
void append(struct arrayADT *a, int val)//add element at the end of array
{
    if(a->arrEnd == MAXSIZE - 1)
        printf("\nNo more space!!!\n");
    else
    {
        a->arrEnd++;
        a->arr[a->arrEnd] = val;
    }
}
int deleteEnd(struct arrayADT *a) //deletes the last element of the array
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
void insert(struct arrayADT *a, int val, int idx)//insert any value at any index of array
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
int deleteIdx(struct arrayADT *a, int idx)//delete value of a particulat index
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
void traverse(struct arrayADT *a)//prints the array
{
    printf("\n");
    for (int i = 0; i <= a->arrEnd; i++)
        printf("%d ", a->arr[i]);
    printf("\n");
}
int sumArrVec(struct arrayADT *a)//sum of all elements
{
    int sum=0;
    for(int i=0;i<=a->arrEnd;i++)
    {
        sum+=a->arr[i];
    }
    return sum;
}
double meanVec(struct arrayADT *a)//average of all elements
{
    return ((double)sumArrVec(a)/arrCount(a));
}

int minVec(struct arrayADT *a)//finds the minimun value
{
    int min=30000;
    for(int i=0;i<=a->arrEnd;i++)
    {
        if(a->arr[i]<min)
            min=a->arr[i];
    }
    return min;
}
int maxVec(struct arrayADT *a)//maximum value
{
    int max=-300;
    for(int i=0;i<=a->arrEnd;i++)
    {
        if(a->arr[i]>max)
            max=a->arr[i];
    }
    return max;
}
double meanHist(struct arrayADT *a)//finds the mean by treating array as an histogram
{
    double sumFX=0, sumF=0;
    for(int i=0;i<=a->arrEnd;i++){
        sumFX += (a->arr[i])*i;
        sumF += a->arr[i];
    }
    return (sumFX/sumF);
}
float arrSD(struct arrayADT *a)//finds sd
{
    float  Variance, SD, Sum=0, Varsum=0.0;
    int i,num;
    double mean;
    num=a->arrEnd;
    mean=meanHist(a);
    for(i=0; i<num; i++)
    {
        Varsum += pow((a->arr[i] - mean),2);
    }
    Variance = Varsum / (float)num;
    SD = sqrt(Variance);
    return SD;
}
int modeArr(struct arrayADT *a)//finds mode
{
    int maxcount=0,maxvalue;
    for(int i=0;i<=a->arrEnd;i++)
    {
        int count=0;
        for(int j=0;j<=a->arrEnd;j++)
        {
            count=0;
            if(a->arr[i]==a->arr[i+1])
                count++;
        }
        if(count>maxcount)
        {
            maxvalue=a->arr[i];
        }
        else
            continue;
        
    }
    return maxvalue;
}
float medianArr(struct arrayADT *a)//finds median
{
    float median,c;
    double b;
    b=meanHist(a);
    c=modeArr(a);
    median=(2*b+c)/3;
    return median;
}
int main()
{
    struct arrayADT arr1, arr2,arr3;
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
    //printf("\n idx for 8 = %d\n",retFirstIdx(&arr1,8));
    retmanyIdx(&arr1,8);
    printf("\nMean of Vector:%f",meanVec(&arr1));
    printf("\nSum of Vector: %d",sumArrVec(&arr1));
    printf("\nMaximun: %d",maxVec(&arr1));
    printf("\nMinimum value: %d",minVec(&arr1));

    append(&arr2,2);
    append(&arr2,3);
    append(&arr2,5);
    append(&arr2,7);
    append(&arr2,8);
    append(&arr2,8);
    append(&arr2,7);
    append(&arr2,4);
    append(&arr2,2);
    traverse(&arr2);
    printf("\nThe mean of distribution: %lf\n",meanHist(&arr2));

    create(&arr3);
    
    append(&arr3,2);
    append(&arr3,3);
    append(&arr3,5);
    append(&arr3,7);
    append(&arr3,8);
    append(&arr3,8);
    append(&arr3,7);
    append(&arr3,4);
    append(&arr3,2);
    traverse(&arr3);
    printf("The standard deviation  is %f",arrSD(&arr3));
    printf("\nMean=%lf \n Mode=%d \n Median=%f",meanVec(&arr3),modeArr(&arr3),medianArr(&arr3));
    edit(&arr3,2,4);
    traverse(&arr3);
    return 0;
}
