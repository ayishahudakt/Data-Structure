#include <stdio.h>
#define MAX 10
void enqueue();
void dequeue();
void display();
int choice,queue[MAX],i,item,front=-1,rear=-1;
int main()
{
    do
    {
        printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
        printf("\nenter your choice:");
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
                printf("exiting.......");
                break;
            default:
                printf("enter a valid choice!!!!");
        }
    }
    while(choice!=0);
}

void enqueue()
{
    if ((rear+1) %MAX == front)
    {
        printf("OVERFLOW1!!!!!");
    }
    else
    {
        if(rear==-1)
            front=0;
        printf("\nenter the elements to insert:");
        scanf("%d",&item);
        rear=(rear+1)%MAX;
        queue[rear]=item;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("UNDERFLOW!!!!!!");
    
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%MAX;
    }
}

void display()
{
    if(front==-1)
    {
        printf("UNDERFLOW!!!!!!");
    }
    else
    {
        printf("elements are:");
        i=front;
        while(i != rear)
        {
            printf("\n%d",queue[i]);
            i= (i+1)%MAX;
        }
       printf("\n%d",queue[rear]);
    }
}
