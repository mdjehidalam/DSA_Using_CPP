//DOUBLY LINKED LIST 

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public: 
    int data;
    Node* next;
    Node* previous;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->previous = NULL;
    }
};

Node* input()
{
    Node* head=NULL;
    Node* tail = NULL;
    int data;
    cin>>data;
    while(data != -1)
    {
        Node* temp = new Node(data);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }else{
            // insert at the end 
            tail->next = temp;
            temp->previous = tail;
            tail = temp;
        }
        cin>>data;
    }
    return head;
}


void print(Node* head)
{
    while(head->next != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<head->data<<endl;
    cout<<endl;
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->previous;
    }
    return ;
}
int main()
{
    Node* head = input();
    print(head);
}
