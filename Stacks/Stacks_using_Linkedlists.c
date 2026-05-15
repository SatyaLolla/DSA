#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}
struct Node* push(struct Node *top, int value){
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory alloc failed");
        return top;
    }
    newNode->data=value;
    newNode->next=top;
    top=newNode;
    return top;
}
struct Node* pop(struct Node *top){
    if(top==NULL){
        printf("Stack underflow detected");
        return top;
    }
    struct Node *temp=top;
    printf("Popped value: %d",temp->data);
    top=top->next;
    free(temp);
    return top;
}
void display(struct Node* top){
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        struct Node *temp=top;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void peek(struct Node *top){
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        printf("Topmost element: %d\n",top->data);
    }
}
int main(){
    struct Node *top=NULL;
    push(top,10);
    push(top,20);
    push(top,23);
    peek(top);
    pop();
    peek();
    return 0;
}