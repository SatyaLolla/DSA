#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int value){
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    if(rear==NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}
void dequeue(){
    if(front==NULL){
        printf("Queue is empty\n");
        return;
    }
    printf("Dequeued element: %d\n",front->data);
    struct node *temp=front->next;
    free(front);
    front=temp;
}
void display(){
    struct node *temp;
    temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void peek(){
    if(front==NULL){
        printf("Queue is empty\n");
        return;
    }
    printf("Front element: %d\n",front->data);
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(23);
    display();
    peek();
    dequeue();
    peek();
    return 0;          
}
