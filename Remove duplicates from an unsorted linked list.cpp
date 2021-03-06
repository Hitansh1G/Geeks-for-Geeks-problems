class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) {
     // your code goes 
        set<int> s;
        Node* temp = head;
        s.insert(temp->data);
        while(temp!=NULL&&temp->next!=NULL){
            if(s.find(temp->next->data)!=s.end()){
                temp->next = temp->next->next;
            }
            else{
                s.insert(temp->next->data);
                temp = temp->next;
            }
        }
        return head;
   
    }
};