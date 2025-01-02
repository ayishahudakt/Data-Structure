#include <stdio.h> 
#define MAX 10

void enqueue();
void dequeue();
void display();

int c, queue[MAX], item, front = -1, rear = -1,i;

int main()
{
    do
    {
        printf("\n1) Insertion\n2) Deletion\n3) Display\n4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c)
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
            printf("\n* Exit point\n");
            break;
        default:
            printf("\nEnter a valid choice: 1, 2, 3, or 4\n");
        }
    } while (c != 4);
}

void enqueue()
{
    if ((rear + 1) % MAX == front)
    {
        printf("\n****************** QUEUE OVERFLOW **\n");
    }
    else
    {
        if (rear == -1)
            front = 0;

        printf("\nEnter the element to insert: ");
        scanf("%d", &item);
        rear = (rear + 1) % MAX;
        queue[rear] = item;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("\n** QUEUE UNDERFLOW **\n");
    }
    else if (front == rear)
    {
        printf("\nThe deleted element is: %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("\nThe deleted element is: %d\n", queue[front]);
        front = (front + 1) % MAX;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("QUEUE elements are:");
        i = front;
        while (i != rear)
        {
            printf("\t%d", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("\t%d\n", queue[rear]);
    }
}
