#include <stdio.h>
void push();
void pop();
void display();
void main();
int stack[10],i,j,n,choice=0,top=-1;
{
        printf("enter the number of elements in the stack:");
        scanf("%d",&n);
        printf("*****stack operation*******");
        printf("\n---------\n");
        while(choice!=4)
        {
                printf("choose one from the below options..\n");
                printf("\n1.push \n2.pop \n3.display \n4.exit");
                printf("\n enter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                         push();
                         break;
                        case 2:
                         pop();
                         break;
                        case 3:
                         display();
                         break;
                        case 4;
                         printf("exiting.......");
                }
        }
}

void push()
{
        int val;
        if(top==n)
        {
                printf("\n OVERFLOW");
        }
        else
        {
                printf("\n enter the value:");
                scanf("%d",&val);
                top=top+1;
                stack[top]=val;
        }
}
void pop()
{
        if(top==-1)
        {
                printf("UNDERFLOW");
        }
        else
        {
                top=top-1;
        }
}
void display()
{
        for(i=top;i>=0;i--)
        {
                printf("%d",stack[i]);
        }
        if(top==-1)
        {
                printf("stack is empty");
        }
}
 
