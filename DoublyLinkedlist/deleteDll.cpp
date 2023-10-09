void deleteAtHead(){
if (head == NULL){
    return ;
}
    Node * temp = head;
    head = head->next;
//if we have only one node and our next is pointing to next
//and there is nothing is left so we have to make sure that
//something is present at next so we assign tail == null
    if (head != NULL){
    tail == NULL;
    }
    else{
        head->prev = NULL;
    }
    delete temp;
}

void deletAtTail(){
    if (head == NULL){
        return;
    }
    Node* temp = tail;//is to be deleted
    // now we have to update the tail
     tail=tail->prev;
     if(tail==NULL){
        head= NULL;
     }
     else{
        // updatted tail
        tail->next = NULL;
     }
     delete temp;
     return;
}