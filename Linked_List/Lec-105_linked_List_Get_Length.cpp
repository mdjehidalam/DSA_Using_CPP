//statically
#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node *next;
    // create constructor
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void print(Node *head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;//move forward
    }
   /* cout<<head->data<<endl;
    head=head->next;//move forward
    cout<<head->data<<endl;
    head=head->next;
    cout<<head->data<<endl;
    head=head->next;
    cout<<head->data<<endl;
    head=head->next;
    cout<<head->data<<endl;
    */
}
Node* takingInput()
{
    int data;
    cin>>data;
    Node *head=NULL; // LL is empty
    Node *tail=NULL; // LL is empty
    while(data!=-1)
    {
        // create LL 
        Node *n=new Node(data);
        //first Node
        if(head==NULL)
        {
            head=n;
            tail=n;
        }else{
            n->next=head;// inserting at head
            head=n;
        }
        cin>>data;
    }
    return head;
}
void PrintCount(Node *head)
{
    int count =0;
    Node *tem=head;
    while(tem!=NULL)
    {
        count++;
        tem=tem->next;  
    }
    cout<<"lenth: "<<count<<endl;
}
int main()
{
   Node *head=takingInput();
   print(head); 
   PrintCount(head);
}