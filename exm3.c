#include <stdio.h>
#include <stdlib.h>
void insert_beg();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();
void traversal();
int count=0,n;
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL, *newnode, *temp, *prev;
int main()
{
    int choice;
    while(choice != 8)
    {
        printf("\nEnter your choice:\n");
        printf("1. INSERT AT BEGINNING\n");
        printf("2. INSERT AT END\n");
        printf("3. INSERT AT A POSITION\n");
        printf("4. DELETION AT BEGINNING\n");
        printf("5. DELETION AT END\n");
        printf("6. DELETION AT A POSITION\n");
        printf("7. TRAVERSAL\n");
        printf("8. EXIT\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert_beg();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_pos();
                break;
            case 4:
                delete_beg();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                delete_pos();
                break;
            case 7:
                traversal();
                break;
            case 8:
                printf("!!!!!!exiting!!!!!!");
                break;
            default:
                printf("enter a valid choice");
        }
    }
    return 0;
}
void insert_beg()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    traversal();
    count++;
}
void insert_end()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        newnode->next=NULL;
        temp->next=newnode;
    }
    traversal();
    count++;
}
 void insert_pos()
 {
     newnode=(struct node *)malloc(sizeof(struct node));
     printf("enter data");
     scanf("%d",&newnode->data);
     if(head==NULL)
     {
         newnode->next=NULL;
         head=newnode;
     }
     else
     {
         printf("enter position:");
         scanf("%d",&n);
         if(n>count){
             printf("not possible");
         }
         else{
             temp=head;
             int i=1;
             while(i != n){
                 temp=temp->next;
                 i++;
             }
             newnode->next=NULL;
             temp->next=newnode;
         }
     }
     traversal();
     count++;
}
void delete_beg(){
    if(head==NULL){
        printf("no node is found");
    }
    else{
        temp=head;
        head=temp->next;
        free(temp);
    }
    traversal();
    count--;
}
void delete_end()
{
    if(head==NULL){
        printf("no node found:");
    }
    else{
        temp=head;
        while(temp->next != NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
    traversal();
    count--;
}
void delete_pos(){
    if(head==NULL){
        printf("no node is found");
    }
    else{
        printf("enter position:");
        scanf("%d",&n);
        if(n>count){
            printf("not possible");
        }
        else{
            int i=1;
            prev=head;
            while(i != n-1){
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
    if(head==NULL){
        printf("no node is found");
    }
    else{
        temp=head;
        while(temp != NULL){
            printf("%d ->",temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }
}
