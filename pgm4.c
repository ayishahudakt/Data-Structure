#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void enqueue();
void dequeue();
void display();
int queue[MAX];
int front=-1;
int rear=-1;

int main()
{
	int choice;
	while(1)
	{
		printf("1.Enqueue(insert an element to queue)\n");
		printf("2.Dequeue(delete an element to queue)\n");
		printf("3.Display all elements in queue\n");
		printf("4.Exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			 enqueue();
			 break;
                        case 2:
                         dequeue();
                         break;
                        case 3:
                         display();
                         break;
                        case 4:
                         exit(0);
                         break;
                  	default:
			 printf("wrong choice,please try again\n");
		}


	}
	return 0;
}

void enqueue()
{
	int item;
	if(rear==MAX-1)
	{
		printf("queue is overflow..!!!!!\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		printf("insert the element in queue:");
		scanf("%d",&item);
		rear++;
		queue[rear]=item;
	}
}

void dequeue()
{
	if(front==-1||front>rear)
	{
		printf("queue is underflow....!!!!\n");
	}
	else
	{
		printf("element deleted from queue is %d \n",queue[front]);
		front++;
	}
}

void display()
{
	int i;
	if(front==-1||front>rear)
	{
		printf("queue is underflow......!!!!!!!!!\n");
	}
	else
	{
		printf("\t\n Queue elements is:");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
		printf("\n");
	}
}  
