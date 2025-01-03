#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL;

void push(){
    int n;
    node *temp, *prev;
    printf("enter data:");
    scanf("%d",&n);
    temp=(node *)malloc(sizeof(node));
    temp->data=n;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        prev=head;
        while(prev->next != NULL){
            prev=prev->next;
        }
        prev->next=temp;
    }
}

void pop(){
    node *temp;
    if(head==NULL){
        printf("empty");
    }
    else{
        temp=head;
        if(temp->next==NULL){
            free(temp);
            head=NULL;
        }
        else{
            while(temp->next->next != NULL){
                temp=temp->next;
            }
            free(temp->next);
            temp->next=NULL;
        }
    }
}
void display(){
    node *temp;
    int count=1;
    temp=head;
    if(head==NULL){
        printf("emptyyy");
    }
    else{
        while(temp != NULL){
            printf("%d->%d =>",count,temp->data);
            temp=temp->next;
            count++;
        }
    }
}

int main() {
    int opt;
    do {
        printf("\n..................\n");
        printf("1) PUSH\n");
        printf("2) POP\n");
        printf("3) DISPLAY\n");
        printf("4) QUIT\n");
        printf("..................\n");
        printf("Choose your option : ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid Operation! Try Again...\n");
        }
    } while (1);
    return 0;
}
