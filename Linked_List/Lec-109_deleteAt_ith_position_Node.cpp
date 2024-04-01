 #include<iostream>
 using namespace std;
 class Node{
     public:
     int data;
     Node* next;
     Node(int data)
     {
         this->data=data;
         next=NULL;
     }
 };
 Node* takingInput()
 {
     int data;
     cin>>data;
     Node* head=NULL; // LL is empty
     Node* tail=NULL; // LL is empty
     while(data !=-1)
     {
         Node* n=new Node(data);
         if(head==NULL)
         {
             head=n;
             tail=n;
         }else{
             tail->next=n;
             tail=n;
         }
         cin>>data;
     }
     return head;
 }
 void print(Node* head)
 {
     while(head !=NULL)
     {
         cout<<head->data<<" ";
         head=head->next;
     }
     cout<<endl;
 }
  Node* deleteAtithNode(Node* head, int i)
  {
      if(i<0)return head;
      if(i==0)
      {
          head=head->next; // next of head 
          return head;
      }
      int count =1;
      Node* temp=head;
      while(count<=i-1 && temp!=NULL)
      {
          head=head->next;
          count++;
      }
      if(head&&head->next)
      {
          head->next=head->next->next; // next of head of head
          return temp;
      }
     return temp;
  }
 int main()
 {
     Node* head=takingInput();
     print(head);
     int i;
     cin>>i;
     head=deleteAtithNode(head,i);
     print(head);
 }