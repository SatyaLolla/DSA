#include<stdio.h>
#define SIZE 10
int front=-1,rear=-1;
int pq[SIZE];
void insert(int value){
    if(rear==SIZE-1){
        printf("PQ is full\n");
        return;
    }
    if(front==-1){
        front++;
    }
    pq[++rear]=value;
    return;
}
void delete(){
    if(front==-1|| front>rear){
        printf("PQ is empty\n");
        return;
    }
    else{
        int maxIndex=front;
        for(int i=0;i<=rear;i++){
            if(pq[i]>pq[maxIndex]){
                maxIndex=i;
            }
        }
        printf("Deleted element: %d\n",pq[maxIndex]);
        for(int i=maxIndex;i<rear;i++){
            pq[i]=pq[i+1];
        }
        rear--;
    }
}
void display(){
    if(front==-1 || front>rear){
        printf("PQ is empty\n");
        return;
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",pq[i]);
        }
        printf("\n");
        return;
    }
}
void peek(){
    if(front==-1 || front>rear){
        printf("PQ is empty\n");
        return;
    }
    else{
        int maxIndex=front;
        for(int i=0;i<=rear;i++){
            if(pq[i]>pq[maxIndex]){
                maxIndex=i;
            }
        }
        printf("Front element: %d\n",pq[maxIndex]);
        return;
    }
}
int main(){
    insert(10);
    insert(20);
    insert(23);
    display();
    peek();
    delete();
    peek();
    return 0;
}