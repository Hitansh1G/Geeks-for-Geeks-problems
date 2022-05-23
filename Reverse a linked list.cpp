class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head){
        // code here
        // return head of reversed list
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