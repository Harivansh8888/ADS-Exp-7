#include<iostream>
#include<stdlib.h>
using namespace std;

#define CAPACITY 4

template <class T>
class stack
{
protected:
T arr[CAPACITY];

public:
T item ,r;
int top;
stack()
{
top=-1;
}
void push(T a)
{
if(top==CAPACITY-1)
{
    cout<<"STACK OVERFLOW"<<endl;
}
else
{
    top++;
    arr[top]=a;
}
}
void pop()
{
if(top==-1)
{
cout<<"STACK UNDERFLOW"<<endl;
}
else
{
arr[top]=NULL;
top--;
cout<<"Element is popped\n";
}}
void traverse()
{
if(top==-1)
cout<<"Nothing to display"<<endl;
else
{
for(int x=0;x<=top;x++)
cout<<arr[x]<<endl;
}
}
};
