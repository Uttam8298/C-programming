//Implement queue with array as an ADT in a structure with the following functions: 
//1>create(q) 2>enque(q,val) 3>deque(q) 4>peekRear(q) 5>peekFront(q) 
//"peeks at the positions without deletion or insertion" 5>print(q) 6>isEmpty(q) 7>isFull(q) 8>count(q)
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
struct cqueue
{
    int cqarr[MAXSIZE];
    int rear;
    int front;
};
typedef struct cqueue cq;
void create(cq *q)//creates
{
    q->rear=-1;
    q->front=-1;
}
void enque(cq *q,int val)//appends at the end of circular queue
{
    if((q->front==0&&q->rear==MAXSIZE-1)||(q->front==q->rear+1))
        printf("\nQueue Overflow\n");
    else
    {
        if((q->front!=0)&&(q->rear=MAXSIZE-1))
            q->rear=-1;
        q->cqarr[++q->rear]=val;
        if(q->front==-1)
            q->front=0;
    }
}
int deque(cq *q)//deletes front
{
    if(q->front==-1&&q->rear==-1)
        printf("\n Queue Underflow\n");
    if(q->front==q->rear)
    {
        q->front=-1;
        q->rear=-1;
    }
    else
    {
        if(q->front==MAXSIZE-1)
            q->front=0;
        else
            q->front++;
    }
    int val=q->cqarr[q->front];
    return val;
}
void peekrear(cq *q)//prints last element
{
    printf("\n%d\n",q->cqarr[q->rear]);
}
void peekfront(cq *q)//prints first element
{
    printf("\n%d\n",q->cqarr[q->front]);
}
void printq(cq *q)//prints the queue
{
    if(q->rear==-1&&q->front==-1)
        printf("\n Queue Underflow\n");
    else if(q->rear>q->front)
    {
        printf("\n");
        for(int i=q->front;i<=q->rear;i++)
            printf("%d\t",q->cqarr[i]);
        printf("\n");
    }
    else if(q->front>q->rear)
    {
        printf("\n");
        for(int s=0;s<MAXSIZE;s++)
            printf("%d\t",q->cqarr[s]);
        for(int h=0;h<q->rear;h++)
            printf("%d\t",q->cqarr[h]);
        printf("\n");
    }
}
int isEmpty(cq *q)//checks if array is empty
{
    if(q->rear==-1)
        return 1;
    else
        return 0;
}
int isFull(cq *q) //checks if array is full
{
    if((q->rear==MAXSIZE-1&&q->front==0)||q->rear==q->front-1)
        return 1;
    else
        return 0;
}
int count(cq *q)//returns length of queue
{
    if(q->rear>q->front)
        return(q->rear-q->front+1);
    else if(q->front>q->rear)
        return((MAXSIZE+1)-(q->front-q->front));
    else
        return 0;
}
int main()
{
    cq q1;
    create(&q1);
    enque(&q1,4);
    enque(&q1,7);
    enque(&q1,8);
    enque(&q1,2);
    printq(&q1);
    peekrear(&q1);
    peekfront(&q1);
    enque(&q1,6);
    deque(&q1);
    printq(&q1);
    int len=count(&q1);
    printf("\n%d",len);
    return 0;
}