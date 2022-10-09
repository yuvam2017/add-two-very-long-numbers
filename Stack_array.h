#include<bits/stdc++.h>
using namespace std;



class Stack
{
private:
    char *stack_array;
    int size,top;

    
public:
    Stack (int size){
        this->size = size;
        stack_array = new char[size];
        top = -1;
    }

    void push(char x)
    {
        if(!isFull())
        {
            stack_array[++top] = x;
        }
        else
            cout << "Stack is Full!" << endl;
    }

    char pop()
    {
        if(!isEmpty())
        {
            return stack_array[top--];
        }

        return 48;
    }


    bool isEmpty()
    {
        return (top == -1);
    }

    bool isFull()
    {
        return (top == size-1);
    }


   void peek(){
    	cout << stack_array[top] << " is at the top " <<endl;
    }
 
};
