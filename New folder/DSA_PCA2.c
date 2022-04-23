#include <stdio.h>
#include <stdlib.h>
#include<time.h>

struct node 
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node* start = NULL;

void print()
{
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	printf("\n");
	struct node* temp;
	temp = start;
	while (temp->next != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("%d", temp->data);
}

void insert()
{
	int upper=99,lower=10;
	int n=(rand()%(upper-lower+1))+lower;
	struct node *temp, *flag;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	
	temp->data = n;
	temp->next = NULL;
	flag = start;

	if (start == NULL) {
		start = temp;
	}
	
	else {
		while (flag->next != NULL)
			flag = flag->next;
		temp->prev = flag;
		flag->next = temp;
	}
	
}

int main()
{
	int choice;
	srand(time(NULL));
	for(int i=0;i<9;i++)
	{
		insert();
	}
	print();
	
	int pos=5;
	struct node* temp;
	temp = start;
	for(int i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	printf("\n\nThe pointer is now at node 5 and the number is %d\n",temp->data);
	
	while(1>0)
	{
		choice=rand()%2;
		if(choice==0)
			choice--;
		
		printf("\nThe random no. is %d",choice);
		if(choice==-1)
			temp=temp->prev;
		else
			temp=temp->next;
		pos=pos+choice;
		printf("\nThe pointer is now at node %d and number is %d\n",pos,temp->data);
		if(temp->prev==NULL || temp->next==NULL)
		{
			printf("EXIT");
			break;
		}	
	}
	
	
	return 0;
}