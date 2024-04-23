#include<iostream>
using namespace std;
class ListNode{
    public: 
    int value;
    ListNode* next;
    ListNode(int data)
    {
        value=data;
        next=NULL;
    }
};
ListNode* input()
{
    int data;
    cin>>data;
    ListNode* head=NULL;
    ListNode* tail=NULL;
    while(data != -1)
    {
        ListNode* n=new ListNode(data);
        //if is it first ListNode
        if(head==NULL)
        {
            head=n;
            tail=n;
        }else{
            // inserting at tail
            tail->next=n;
            tail=n;
        }
        cin>>data;
        
    }
    return head;
}
void print(ListNode* head)
{
    while(head)
    {
        cout<<head->value<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
ListNode* reverse(ListNode* head)
{
    ListNode* current=head;
    ListNode* previous=NULL;
    ListNode* future=NULL;
    
    while(current)
    {
        future=current->next;
        current->next=previous;
        previous=current;
        current=future;
    }
    return previous;
}
int main()
{
    ListNode* head=input();
    print(head);
    head=reverse(head);
    print(head);
    
}
