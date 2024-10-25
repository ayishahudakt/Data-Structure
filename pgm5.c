#include <stdio.h>
#include <stdlib.h>
int n,count=0;
void insert_begin();
void insert_end();
void insert_pos();
void delt_begin();
void delt_end();
void delt_pos();
void traversal();
void search();

	struct node
	{
		int data;
		struct node*next;
	}
	struct node*head=NULL, *newnode, *temo, *prev;

int main()
{
	int ch;
	while(ch!=8)
	{
		printf("\n Enter your choice: ");
		printf("\n 1.Insert At Begin \n2.Insert at End \n3.Insert at position \n4.Delete at begin \n5.Delete at end \n6.Delete at position \n7.Traversal\n8.Searching");
		
		switch(ch)
		{
		 case 1:
			insert_begin();
			break;
                 case 2:
                        insert_end();
                        break;

                 case 3:
                        insert_pos();
                        break;

                 case 4:
                        delt_begin();
                        break;

                 case 5:
                        delt_end();
                        break;

                 case 6:
                        delt_pos();
                        break;

                 case 7:
                        traversal();
                        break;
                 case 8:
                        search();
                        break;
		 default:
			printf("invalid choice...!!!!");
	
		}

	}
}

void insert_begin()
{
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("\t enetr the date:");
	scanf("%d", &newdata->data);
		newnode->next=head;
		head=newnode;
	traversal();
	count++;
}

void insert_end()
{
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("\t enter the data:");
	scanf("%d",&newdata->data);
	if(head==NULL)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next; //temp ne increment cheyyaa
		}
		newnode->next=NULL;
		temp->next=newnode;
	}
	traversal();
	count++;
}

void insert_pos()
{
	newnode=(struct node*next)malloc(sizeof(struct node *));
	printf("enter your data:");
	scanf("%d", &newnode->data);
	if(head==NULL)
	{
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		printf("enter your position to insert the number:");
		scanf("%d", &n);
		if(n>count)
		{
			printf("insertion is not possible(linkedlist is full)");
		}
		else
		{
			int i=1;
			temp=head;
			while(i<n)
			{
				temp=temp->head;
				i++;
			}
			newnode->next=temp->next;
			temp->next=newnode;
		}
	}
	traversal();
	count++;
}

void delt_begin()
{
	if(head==NULL)
	{
		printf("no node found!!!(linked list is empty)");
	}
	else
	{
		temp=head;
		head=temp->next;
		free(temp); // temp delete aakkaanu
	}
	traversal();
	count--;
}

void delt_end()
{
	if(head==NULL)
	{
		printf("no node found!!(linkedlist is empty)");
	}
	else
	{
		temp=head;
		while(temp->next=NULL)
		{
		    prev=temp; // temp and prev same node ne aanu point cheyyuka
		    temp=temp->next; // temp increment cheyth last nodeil ethiyaalu(NULL point cheyyumbo) loopinn porath verum
		}
		prev->next=NULL;
		free(temp);
	}
	traversal();
	count--;
}

void delt_pos()
{
        if(head==NULL)
        {
                printf("no node found!!(linkedlist is empty)");
        }
	else
	{
		printf("enter the position to delete the node:");
		scanf("%d", &n);
		if(n>count)
		{
			printf("the deletion is not possible(ll is empty)");
		}
		else
		{
			int i=1;
			prev=head;
			while(i<n-1)
			{
			    prev=prev->next;
			    i++;
			}
			temp=prev->next;
			prev->next=temp->next;
			free(temp);
		}
	}
	traversal();
	count--;

}

void traversal()
{
	if(head==NULL)
	{
		printf("no node is present");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			printf("%d", temp->data);
			temp=temp->next;
		}
		printf("%d", temp->data);
	}
}

void search()
{
	int search,flag=0,i=1;
	printf("enter the element:");
	scanf("%d",&search);
	if(head==NULL)
	{
		printf("no node is present");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			if(temp->data==search)
			{
				flag=1;
				printf("its found at %d position",i);
				break;
			}
                	temp=temp->next;
                	i++;
		}
		if(flag==0)
		{
			printf("not found!!!!");
		}

	}	
}

