#include<iostream>
#include<string>
using namespace std;

class pc
{
    public:
    int top=-1;
    char A[20];
    bool isEmpty();
    bool isFull();
    void push(char x);
    char pop();
    void display();
    char peek();
};
bool pc::isFull()
{
    if(top==19)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool pc::isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void pc :: push(char a)
{
    if(isFull()==true)
    {
        cout<<"Stack is full!";
    }
    else
    {
        top++;
        A[top]=a;
    }
}
char pc :: pop()
{
    char x;
    if(isEmpty()==true)
    {
        cout<<"Stack is empty";
    }
    else
    {
        x=A[top];

    }
    top--;
    return x;
}
char pc :: peek()
{
    return A[top];
}
void pc :: display()
{
    cout<<"Stack is :";
    for(int i=0;i<=top;i++)
    {
        cout<<" "<<A[i];
    }
}
int main()
{
    pc obj;
    string e;
    cout<<"Enter your expression:";
    cin>>e;
    int s=e.length();
    for(int i=0;i<s;i++)
    {
        int p=obj.peek();
        if(e[i]=='{' || e[i]=='[' || e[i]=='(')
        {
            obj.push(e[i]);
        }
        else if((e[i]=='}' && p=='{') || (e[i]==']' && p=='[') || (e[i]==')' && p=='('))
        {
            obj.pop();
        }
        else{
        }

    }
    if(obj.isEmpty()==true)
    {
        cout<<"Given expression is correctly parenthesized";
    }
    else
    {
       cout<<"Given expression is not correctly parenthesized";
    }
    return 0;
}
