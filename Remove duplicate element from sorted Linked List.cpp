Node *removeDuplicates(Node *head)
{
 // your code goes here
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    while(temp->next !=NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
            continue;
        }
            
        temp = temp->next;
    }
    return head;
}