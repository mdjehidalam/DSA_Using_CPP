#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    // create constructor 
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
Node* TakingInput()
{
    int data ;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1)
    {
        Node *n=new Node(data);
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
void IthElement(Node* head)
{
    int i;
    cin>>i;
    int count=0;
    while(head!=NULL)
    {
        if(count==i)
        {
            cout<<head->data<<endl;
            break;
        }
        head=head->next;
        count++;
    }
}
int main()
{
    Node* head=TakingInput();
    IthElement(head);
}