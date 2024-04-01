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
 Node* insertATithPosition(Node* head,int i, int data)
 {
     if(i<0) return head;
     if(i==0)
     {
         Node* n=new Node(data);
         n->next=head;
         head=n;
         return head;
     }
     Node* copyhead=head;
     int count=1;
     while(count<=i-1 && head !=NULL)
     {
         
         head=head->next;
     }
     if(head)
     {
         Node* n=new Node(data);
         n->next=head->next;
         head->next=n;
         return copyhead;
     }
     return copyhead;
 }
 int main()
 {
     Node* head=takingInput();
     print(head);
     int i,data;
     cin>>i>>data;
     head=insertATithPosition(head,i,data);
     print(head);
 }