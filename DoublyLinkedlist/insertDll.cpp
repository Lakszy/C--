#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};

// ! In DLL we need head and tail , which both have to be pointing to the null
class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }

void display(){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

void insertAtStart(int val){
    Node* new_node = new Node(val);
    // If empty
    if (head == NULL){
        head=new_node;
        tail=new_node;
        return ;        
    }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
     }


void insertAtEnd(int val){
    Node* new_node= new Node(val);
    if (tail == NULL){
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
    return ;
};


void insertAtK(int k, int val){
    Node *temp = head;
    // ! 1 based indexing
    int cnt = 1;
    while (cnt<(k-1)){
        temp=temp->next;
        cnt++;
    }

    Node *new_node = new Node(val);
    // temp here is the one position before the insertion
    new_node->next=temp->next;
    temp->next= new_node;
    
   new_node->prev = temp;
   new_node->next->prev = new_node;
   return ;

    
}

};

int main(){
   DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.display();
    dll.insertAtEnd(2);
    dll.display();
    dll.insertAtEnd(3);
    dll.display();
    dll.insertAtEnd(4);
    dll.display();
    dll.insertAtK(2,89);
    dll.display();
    return 0;
}