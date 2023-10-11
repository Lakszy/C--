#include<bits/stdc++.h>
using namespace std;

class Node{
    int value;
    Node* next;
    
    Node(int data){
      value = data;
      next = NULL;
    }
};


class Queue{
    Node* head;
    Node* tail;
    int size;
public:
Queue(){
    this->head=NULL;
    this->tail=NULL;
    this->size=0;
}
//! Enqueue is to add we always add  
//! from the tail and remove from the head
void enqueue(int data){
    Node* newnode = new Node(data);
    if (this->head == NULL){
        this->head = this->tail = newnode;
    }
    else{
        this->tail->next = newnode;
        this->tail = newnode;
    }
    this->size++;
  }

  void deQueue(){
    if ( this->head == NULL){
        return;
    }
    else{
        Node* oldHead = this->head;
        Node* newHead = this->head->next;
        this->head = newHead;
        // poniting to the null and then deleting
        oldHead->next=NULL;
        delete oldHead;
    }
  }

};
bool isEmpty(){
    return this->head = NULL;
}

int main(){

    return 0;
}