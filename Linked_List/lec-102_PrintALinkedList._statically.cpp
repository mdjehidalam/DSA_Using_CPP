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
int main()
{
    Node n1(1),n2(2),n3(3),n4(4),n5(5);
    // making a connection 
    n1.next=&n2;
     n2.next=&n3;
      n3.next=&n4;
     n4.next=&n5;
     Node *head=&n1;//head contain address of node n1;
     print(head);//sending address as parameter 
}