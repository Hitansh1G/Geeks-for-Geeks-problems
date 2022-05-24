class Solution{
    public:
    struct Node* reverseList(struct Node *head){
        // code here
        if(head==NULL || head->next == NULL)
            return head;
        Node *prev = NULL,*curr = head,*next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
};