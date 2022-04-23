#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
const int inf = 1e5 + 7;
const int mxn = 5;
typedef struct Stack{int t,*arr;} stack;
bool isEmpty(stack *st){return st->t==0;}
bool isFull(stack *st){return st->t==mxn;}
int count(stack *st){return st->t;}
void create(stack *st){
	st->t = 0;
	st->arr = (int *)malloc(sizeof(int) * mxn);
}

void push(stack *st,int val){
	if(isFull(st))printf("Stack is Full!!!\n");
	else st->arr[st->t++] = val;
}

void pop(stack *st){
	if(isEmpty(st))printf("Stack is Empty!!!\n");
	else st->t--;
}

int peek(stack *st){
	if(isEmpty(st))printf("Empty Stack!!!");
	return st->t==0 ? -inf : st->arr[st->t-1];
}

void print(stack *st){
	printf("Stack : ");
	for(int i=0;i<st->t;i++)printf("%d ",st->arr[i]);
	printf("\n");
}

int main(){
	stack st;
	create(&st);
	printf("Stack empty : %d\n",isEmpty(&st));
	printf("Stack full  : %d\n",isFull(&st));
	push(&st,4);
	push(&st,2);
	push(&st,7);
	print(&st);
	printf("Stack count : %d\n",count(&st));
	push(&st,1);
	printf("Peek element : %d\n",peek(&st));
	push(&st,5);
	print(&st);
	push(&st,2);
	for(int i=0;i<5;i++)pop(&st);
	print(&st);
	pop(&st);
	return 0;
}