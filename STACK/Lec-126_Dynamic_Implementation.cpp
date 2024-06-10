#include<iostream>
using namespace std; 
//IMPLEMENTATION WITH ARRAY 
class Stack {
    int *arr;
    int size ; 
    int top ; // this is hold current index of the stack 
    public: 
    Stack() // this is default construction 
    {
        size = 4 ;  // set a defualt value;
        top = -1; // when top's index is -1 it means stack is empty
        arr = new int [size];
    }
    Stack(int s)
    {
        size = s; 
        arr = new int [size];
        top = -1; 
    }

    void push(int value)
    {
        if(top == size-1){
            int* newArr = new int[2*size];
            for(int i=0; i<size; i++)
            {
                newArr[i] = arr[i];
            }
            delete arr;
            arr = newArr;
            size = size*2; 
        }
        top++;
        arr[top]=value;
    }
    void pop(){
        if(top == -1 ){
            cout<<"Stack is Empty, it means you cannot perform pop operation"<<endl; 
            return; 
        }
        top --;
    }
    bool isEmpty()
    { /*
        if(top == -1) {
            return true;
        } else {
            return false ; 
        }
        */
        return top == -1;
    }
    int peek(){
        if(top == -1) {
            return -100;
        }
        return arr[top];
    }

    int Stacksize(){
        return size;
    }
};
int main()
{
   system("cls");
   Stack s(2); 
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.push(60);
   //s.pop();
   cout<<"Empty:"<< s.isEmpty()<<endl; 
   cout<<"Size: "<<s.Stacksize()<<endl; 
   cout<<"topMost Element: "<< s.peek()<<endl; 

}
