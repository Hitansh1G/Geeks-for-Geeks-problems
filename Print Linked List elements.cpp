class Solution
{
    public:
    void display(Node *head){
      //your code goes here
        if(head== NULL){
            return;
        }
        else{
            cout<<head->data<<" ";
            display(head->next);
        }
    }
};