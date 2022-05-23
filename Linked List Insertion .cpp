class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
     Node *insertAtBegining(Node *head, int x) {
      // Your code here
      // Check for empty list
      if(head==NULL)
      {
          head = new Node(x);
          return head;
      }
      
      //Creating new node to be inserted in LL
      Node* newnode = new Node(x);
      newnode->next = head;
      head = newnode;
      
      return head;
   }
   
   
   //Function to insert a node at the end of the linked list.
   Node *insertAtEnd(Node *head, int x)  {
      // Your code here
      //Check for Empty list
      if(head==NULL)
      {
          head = new Node(x);
          return head;
      }
      
      Node* temp = head;
      //Creating node to insert at end in LL
      Node* newnode = new Node(x);
      
      //Searching for last element
      while(temp->next != NULL)
      {
          temp = temp->next;
      }
      temp->next = newnode;
      newnode->next = NULL;
      
      return head;
   }
};