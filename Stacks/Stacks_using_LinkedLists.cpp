#include<iostream>
using namespace std;
template <typename T>
class node{
    public:
    T data;
    node <T> *next;
    node(){
        next=nullptr;
    }
    node(T value){
        data=value;
        next=nullptr;
    }
};
template <typename T>
class stack{
    public:
    node <T> *top;
    stack(){
        top=nullptr;
    }
    void push(T value){
        node <T> *ptr= new node<T>(value);
        if(ptr==nullptr){
            cout<<"Memory alloc failed";
        }
        else{
            ptr->next=top;
            top=ptr;
        }
    }
    void pop(){
        if(top==nullptr){
            cout<<"Stack empty";
        }
        else{
            node <T> *temp = top;
            cout<<"Popped element: "<<top->data;
            top=top->next;
            delete temp;
        }
    }
    void display(){
        if(top==nullptr){
            cout<<"Stack empty";
        }
        else{
            node <T> *ptr;
            ptr=top;
            while(ptr!=nullptr){
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }
        }
    }
    void peek(){
        if(top==nullptr){
            cout<<"Stack empty";
        }
        else{
            cout<<"Topmost element: "<<top->data;
        }
    }
};
int main(){
    stack <int>s;
    s.push(10);
    s.push(20);
    s.push(23);
    s.display();
    s.peek();
    s.pop();
    s.peek();
    return 0;
} 