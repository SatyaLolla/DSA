#include<stdio.h>
#include<stdlib.h>
struct Node{
    void* ptr;
    struct Node *next;
}
struct Node* push(struct Node *top, int *value){
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory alloc failed");
        return top;
    }
    newNode->(*ptr)=*value;
    newNode->next=top;
    top=newNode;
    return top;
}
struct Node* pop(struct Node *top){
    if(top==NULL){
        printf("Stack underflow detected\n");
        return top;
    }
    struct Node *temp=top;
    printf("Popped value: %d\n",temp->(*ptr));
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
            printf("%d ",temp->(*ptr));
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
    top=push(top,*ptr);
    top=push(top,10);
    top=push(top,20);
    top=push(top,23);
    peek(top);
    top=pop(top);
    peek(top);
    return 0;
}