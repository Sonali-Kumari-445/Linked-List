#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next; 
};
struct Node *insert_At_end(struct Node *head, int key){
    struct Node *temp;
    struct Node *ptr;
    temp=malloc(sizeof(struct Node));
    if(temp!=NULL){
        temp->data=key;
        temp->next=NULL;
    }
    if(head==NULL){        
      head=temp;
      return head;
    }
    while(ptr->next!=NULL){
        ptr=head;
        ptr=ptr->next;
        ptr->next=temp;
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
    int data = 5;
    struct Node *head;
    head=create_list(data);
    printf("Linked List Before insertion : ");
    print(head);
    head = insert_At_end(head,8);
    printf("Linked List After insertion : ");
    print (head);
}
