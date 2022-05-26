class Solution
{
    public:
    Node* reverse(Node*head){
        if(head==NULL)
            return head;
        Node*prev=NULL;
        Node*curr=head;
        Node*nextptr;
        while(curr){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second){
       // code here
        first=reverse(first);
        second=reverse(second);
       
        int carry=0;
        Node*dummy=new Node(0);
        Node*temp=dummy;
        while(first!=NULL || second!=NULL || carry==1){
            int sum=0;
            if(first!=NULL){
                sum+=first->data;
                first=first->next;
            }
            if(second!=NULL){
                sum+=second->data;
                second=second->next;
            }
            sum=sum+carry;
            carry=sum/10;
            Node*help=new Node(sum%10);
            temp->next=help;
            temp=temp->next;
        }
        Node*ans=reverse(dummy->next);
        return ans;
    }
};