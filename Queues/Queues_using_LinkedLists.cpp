#include<iostream>
using namespace std;
template <typename T>
class node{
    public:
    T data;
    class node *next;
};
template <typename T>
class Queue{
    public:
    node<T> *front;
    node<T> *rear;
    Queue(){
        front=rear=nullptr;
    }
    void enqueue(T value){
        node<T> *newNode= new node<T>;
        newNode->data=value;
        newNode->next=nullptr;
        if(front==nullptr){
            front=rear=newNode;
        }
        else{
            rear->next=newNode;
            rear=newNode;
        }
    }
    void dequeue(){
        if(front==nullptr){
            cout<<"Queue is empty"<<endl;
        }
        else{
            node <T> *temp=front;
            cout<<"Dequeued element is: "<<front->data<<"\n";
            front=front->next;
            delete temp;
            if(front==nullptr){
                rear=nullptr;
            }
        }
    }
    void display(){
        if(front==nullptr){
            cout<<"Queue is empty"<<"\n";
            return;
        }
        node <T> *temp=front;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
    void peek(){
        if(front==nullptr){
            cout<<"Queue is empty\n";
            return;
        }
        cout<<"Front element is: "<<front->data<<"\n";
    }
};
int main(){
    Queue <int> c;
    c.enqueue(11);
    c.enqueue(22);
    c.enqueue(33);
    c.display();
    c.peek();
    c.dequeue();
    c.display();
    return 0;
}