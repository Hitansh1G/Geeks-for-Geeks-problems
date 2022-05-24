class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
       int c=0;
        node *prev=NULL,*cur=head,*next;
        while(cur && c<k)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            c++;
        }
        if(next!=NULL)
        {
            head->next=reverse(next,k);
        }
        return prev;
    }
};