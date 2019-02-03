#include <iostream>
#include "ll.cpp"

using namespace std;

class Stack{
    public:
    Node * top;
    LinkedList l1;
    Stack(){
        top = NULL;
        
    }
    // Push on top
    void push(int value){
       // void insertAt(int value, int pos){
       l1.insertAt (1, value);
       //top = new_head;
       top = l1.head; 
       
    }
    // Pops on top
    void pop(){
       // void delet(){
       l1.delet();
       // top = new_head;
       top = l1.head;
    }
    bool isEmpty(){
        if(top == NULL) return true;
        return false;
    }
    int size(){
        return l1.countItems();
    
    }
    void topDisplay(){
    
    }
    void display(){
        l1.display();
    
    }
    
};
/*
class Queue{
     public:
    Node * top;
    ll l1;
    Queue(){
        top = NULL;
        
    }
    // insert at the end
    void Enqueque(int value){
       // void insertAt(int value, int pos){
       l1.insertAt (value, 1);
       //top = new_head;
       top = l1.head; 
       
    }
    // Delete in the front
    void Dequeue(){
       // void deleteAt(int pos){
       l1.deleteAt(1);
       // top = new_head;
       top = l1.head;
    }
}*/

int main(){
    Stack s1;
    
    for(int i = 0; i < 7; i++)
        s1.push(i);
    s1.display();
    s1.pop();
    s1.display();    

    return 0;
}
