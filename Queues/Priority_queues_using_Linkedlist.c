#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    if(front==NULL){
        front=rear=newNode;
        return;
    }
    else{
        struct node *temp=front;
        if(front->data<value){
            newNode->next=front;
            front=newNode;
            return;
        }
        while(temp!=NULL){
            if(temp->next!=NULL &&temp->next->data<value){
                newNode->next=temp->next;
                temp->next=newNode;
                return;
            }
            temp=temp->next;
        }
        rear->next=newNode;
        rear=newNode;
    }
}
void delete(){
    if(front==NULL){
        printf("PQ is empty");
        return;
    }
    struct node *temp=front;
    printf("Deleted element: %d\n",temp->data);
    front=front->next;
    free(temp);
}
void display(){
    if(front==NULL){
        printf("PQ is empty");
        return;
    }
    struct node *temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void peek(){
    if(front==NULL){
        printf("PQ is empty");
        return;
    }
    printf("Topmost element: %d\n",front->data);
}
int main(){
    insert(5);
    insert(2);
    insert(8);
    insert(1);      
    display();
    peek();
    delete();
    display();      
    peek();
    return 0;
}
    /*rear->next=newNode;
    rear=newNode;
    struct node *temp=front;
    struct node *t=front;
    while(temp!=NULL){
        t=temp->next;
        while(t!=NULL){
            if((temp->data)<(t->data)){
                int link;
                link=temp->data;
                temp->data=t->data;
                t->data=link;
            }
            t=t->next;
        }
        temp=temp->next;
    }*/