#include<stdio.h>
#define MAX_SIZE 10
int arr[MAX_SIZE];
int top=-1;
int push(int top,int value){
    if(top==MAX_SIZE-1){
        printf("Stack overflow");
        return top;
    }
    else{
        arr[++top]=value;
    }
    return top;
 }
int pop(int top){
    if(top==-1){
        printf("Stack is empty");
        return top;
    }
    else{
        printf("Popped element: %d",arr[top]);
        top--;
    }
    return top;
 }
void peek(int top){
    if(top==-1){
        printf("Stack empty");
    }
    else{
        printf("Topmost element: %d",arr[top]);
    }
}
void display(int top){
    if(top==-1){
        printf("Stack empty");
    }
    else{
    for(int i=top;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    }
}
int main(){
    top=push(top,10);
    top=push(top,20);
    top=push(top,23);
    peek(top);
    top=pop(top);
    peek(top);
    return 0;
}
#include<stdio.h>
#define MAX_SIZE 10
int arr[MAX_SIZE];
int top=-1;
int push(int top,int value){
    if(top==MAX_SIZE-1){
        printf("Stack overflow");
        return top;
    }
    else{
        arr[++top]=value;
    }
    return top;
 }
int pop(int top){
    if(top==-1){
        printf("Stack is empty");
        return top;
    }
    else{
        printf("Popped element: %d",arr[top]);
        top--;
    }
    return top;
 }
void peek(int top){
    if(top==-1){
        printf("Stack empty");
    }
    else{
        printf("Topmost element: %d",arr[top]);
    }
}
void display(int top){
    if(top==-1){
        printf("Stack empty");
    }
    else{
    for(int i=top;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("\n");
    }
}
int main(){
    top=push(top,10);
    top=push(top,20);
    top=push(top,23);
    peek(top);
    top=pop(top);
    peek(top);
    return 0;
}