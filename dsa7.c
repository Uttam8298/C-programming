//Implement queue with array as an ADT in a structure with the following functions: 
//1>create(q) 2>enque(q,val) 3>deque(q) 4>peekRear(q) 5>peekFront(q) 
//"peeks at the positions without deletion or insertion" 5>print(q) 6>isEmpty(q) 7>isFull(q) 8>count(q)
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
struct queue
{
    int qarr[MAXSIZE];
    int rear;
    int front;
};
typedef struct queue qx;
int count(qx *q)//returns length of queue
{
    return((q->rear)+1-(q->front));
}
void peekfront(qx *q)
{
    printf("\n%d",q->qarr[q->front]);
}
void peekrear(qx *q)//prints last element
{
    printf("\n%d",q->qarr[q->rear]);
}
void printq(qx *q)//prints whole queue
{
    if(q->rear==-1)
        printf("\nQueue Underflow\n");
    else
    {
        printf("\n");
        for(int i=q->front;i<=q->rear;i++)
        {
            printf("%d\t",q->qarr[i]);
        }
    }
}
int isEmpty(qx *q)//checks if array is empty
{
    if(q->rear==-1)
        return 1;
    else
        return 0;
}
int isFull(qx *q) //checks if array is full
{
    if(q->rear==MAXSIZE-1)
        return 1;
    else
        return 0;
}
void create(qx *q)//creates a queue
{
    q->rear=-1;
    q->front=-1;
}
void enque(qx *q,int val)//append
{
    if(q->rear==MAXSIZE-1)
        printf("\nQueue Overflow\n");
    else
    {
        q->rear++;
        q->qarr[q->rear]=val;
        if(q->rear==0)
        {
            q->front=q->rear;
        }
    }
}
int deque(qx *q)//deletes from front
{
    if(q->rear==-1)
        printf("\nQueue Underflow\n");
    else
    {
        return(q->qarr[q->front++]);
    }
}
int main()
{
    qx q1;
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