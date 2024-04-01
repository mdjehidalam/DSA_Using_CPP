//Dynamically
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //create constructor
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    //create obj dynamically 
   Node *n1=new Node(1);
   Node *n2=new Node(2);
   Node *n3=new Node(3);
   Node *n4=new Node(4);
   Node *n5=new Node(5);
   //making a connection 
   Node *head=n1;
   n1->next=n2;
   n2->next=n3;
   n3->next=n4;
   n4->next=n5;
   print(head);
}