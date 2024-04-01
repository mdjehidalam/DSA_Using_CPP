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
    Node *head=NULL;// LL is empty 
    Node *tail=NULL;// LL is empty
    while(data!=-1)
    {
        //create LL
        Node *n=new Node(data);
        //if first Node
        if(head==NULL)
        {
            head=n;
            tail=n;
        }else{
            tail->next=n;//inserting at tail
            tail=n;
        }
        cin>>data;
    }
    return head;
}
int main()
{
   Node *head=takingInput();  
   print(head);
}