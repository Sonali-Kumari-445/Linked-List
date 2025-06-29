#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *deletion_At_end(struct Node *head){
    struct Node *last, *secondlast;
    last=head;
    secondlast=head;
    while(last->next!=NULL){
        secondlast=last;
        last=last->next;
    }
    if(last==head){
        head=NULL;
    }
    else{
        secondlast->next=NULL;
        free(last);
    }
    return head;
}
struct Node *create_list(int n){
    struct Node *newNode=NULL;
    struct Node *head=NULL;
    struct Node *temp=NULL;
    for(int i=1; i<=n; i++){
        int data;
        newNode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter Element No %d : ",i);
        scanf("%d",&data);
        newNode->data=data;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
    }
    return head;
}
void print(struct Node *head){
    while(head!=NULL){
        printf("%d  ",head->data);
        head=head->next;
    }
    printf("\n");
}
int main(){
    int n = 5;
    struct Node *head;
    head=create_list(n);
    printf("Linked List Before insertion : ");
    print(head);
    head = deletion_At_end(head);
    printf("Linked List After insertion : ");
    print (head);
}
