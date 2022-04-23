#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
struct queueADT
{
    int items[SIZE];
    int front;
    int rear;
};
void create(struct queueADT *q)
{
    q->front = -1;
    q->rear = -1;
}
int isFull(struct queueADT *q)
{
    if ((q->front == q->rear + 1) || (q->front == 0 && q->rear == SIZE - 1))
        return 1;
    else
        return 0;
}
int isEmpty(struct queueADT *q)
{
    if (q->front == -1)
        return 1;
    else
        return 0;
}
void enqueue(struct queueADT *q, int value)
{
    if (isFull(q))
        printf("\nQueue is Full!!");
    else
    {
  
        if (q->front == -1)
            q->front = 0;
        q->rear = (q->rear + 1) % SIZE;
        q->items[q->rear] = value;
        printf("\nInserted -> %d", value);
    }
}
int dequeue(struct queueADT *q)
{
    int retVal;
    if (isEmpty(q))
    {
        printf("\nQueue is Empty!!");
        retVal = -1;
    }
    else
    {
  
        retVal = q->items[q->front];
        printf("\nDeleted : %d", retVal);
        if (q->front == q->rear)
            q->front = q->rear = -1;
        else
            q->front = (q->front + 1) % SIZE;
    }
    return retVal;
}
// Function to print the queue
void print(struct queueADT *q)
{
    int i;
    if (isEmpty(q))
        printf(" \nQueue Empty\n");
    else
    {
        printf("\n Front -> %d ", q->front);
        printf("\n Items -> ");
        for (i = q->front; i != q->rear; i = (i + 1) % SIZE)
        {
            printf("%d ", q->items[i]);
        }
        printf("%d ", q->items[i]);
        printf("\n Rear -> %d \n", q->rear);
    }
}
void ogArray(struct queueADT *q)
{
    if (isEmpty(q))
        printf(" \nQueue Empty\n");
    else
    {
    	int i;
        printf("\n**\n");
        for ( i = 0; i < SIZE; i++)
            printf("%d ", q->items[i]);
        printf("\n**\n");
    }
}



void count(struct queueADT *q){
	if(isEmpty(q)==1)
		printf("\n Queue is Empty");
	else
	{
		int i,count=1;
		
		for(i=q->front;i!=q->rear;i=(i+1)%SIZE)
			count++;
		
		printf("\nCount of Queue elements are: %d",count);
	}
}


int main()
{
	
	
	struct queueADT q1;

	
	
	
	
	
	int opt,no;
	printf("\n \"CIRCULAR QUEUE\" ");

	while (1)
	{

		printf("\n \n 1.Create 2.Enqueue 3.Dequeue 4.Print 5.Count 6.Print Array\n 0.Exit\n\n");
		printf(" Enter a choice: ");
		scanf("%d", &opt);
		
		switch(opt)
		{
			case 1:
				create(&q1);
				break;
			case 2:
				printf("\nEnter the number to insert: ");
				scanf("%d", &no);
				enqueue(&q1,no);
				break;
			case 3:
				printf("\n%d is Deleted", dequeue(&q1));
				break;
		
			case 4:
				print(&q1);
				break;
		
			case 5:
				count(&q1);
				break;
			case 6:
				ogArray(&q1);
				break;
			case 0:
				exit (0);
			default:
				printf("\n Invalid choice");
				break;
		}
	}
 	
	
	
	
	
	
	

    return 0;
}