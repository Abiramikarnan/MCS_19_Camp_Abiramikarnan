#include <iostream>
#include<bits/stdc++.h>

using namespace std;
class Stack
{
	public:
	int top;
	unsigned capacity;
	char *array;
};

Stack* createstack(unsigned capacity)
{
	Stack *stack=new Stack();
	stack->capacity=capacity;
	stack->top=-1;
	stack->array=new char[stack->capacity*sizeof(char)];
return stack;
}

int isfull(Stack *stack)
{
	return (stack->top==stack->capacity-1);
}
int isempty(Stack *stack)
{
	return (stack->top==-1);
}
void push(Stack *stack,char item)
{
	if(isfull(stack))
	{
		return;
	}
	else
	{
		stack->array[++stack->top]=item;
	}
}
char pop(Stack *stack)
{
	if(isempty(stack))
	{
		return -1;
	}
	else
	{
	return stack->array[stack->top--];
	}
}
void reverse(char str[])
{
	int n=strlen(str);
	Stack *stack=createstack(n);
	int i;
	for(i=0;i<n;i++)
	{
		push(stack,str[i]);
	}
	for(i=0;i<n;i++)
	{
		str[i]=pop(stack);
	}
}
int main() 
{
	
	// your code goes here
	char str[]="GeeksQuiz";
	reverse(str);
	
	for(int i=0;i<n;i++)
	{
	cout<<str[i];
	}
	return 0;
}
