#include <iostream>
#include<bits/stdc++.h>

using namespace std;
#define max 1000
class Stack
{
	int top;
	public:
	
		int a[max];
		Stack()
		{
			int top=-1;
		}
		bool push(int x);
		int pop();
		bool isempty();
	
};
bool Stack::push(int x)
{
	if(top>=max-1)
	{
	cout<<"StACK OVERFLOW";
	return false;
	}
	else
	{
		a[++top]=x;
		cout<<x<<" is pushed"<<endl;
		return true;
	}
	
}
int Stack::pop()
{
	if(isempty())
	{
		cout<<"stack underflow";
	}
	else
	{
		int x=a[top--];
		return x;
	}
}
bool Stack::isempty()
{
	if(top<0)
	return true;
	else 
	return false;
}
int main() 
{
	 class Stack s;
	 s.push(10);
	 s.push(20);
	cout<<s.pop()<< " is poped";
	return 0;
}
