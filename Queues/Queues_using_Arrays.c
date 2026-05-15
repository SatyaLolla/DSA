#include<stdio.h>
#define MAX_SIZE 10
int front=-1,rear=-1;
int arr[MAX_SIZE];
void enqueue(int value){
    if(rear==MAX_SIZE-1){
        printf("Queue overflow");
    }
    else{
        if(front==-1){
            front++;
        }
        arr[++rear]=value;
    }
}
void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue empty");
    }
    else{
        printf("Dequeued element: %d",arr[front]);
        front++;
    }
    if(front>rear){
        front=rear=-1;
    }
}
void display(){
    if(front==-1 || front>rear){
        printf("Queue empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",arr[i]);
        }
    }
}
void peek(){
    if(front==-1 || front>rear){
        printf("Queue empty");
    }
    else{
            printf("%d",arr[front]);
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    peek();
    dequeue();
    peek();
    return 0;
}