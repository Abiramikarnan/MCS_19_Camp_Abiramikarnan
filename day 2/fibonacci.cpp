#include <iostream>
using namespace std;
int fib(int);
int main() 
{
	// your code goes here
	int i,x;
	int sum=0;
	for(i=1;i<1000;i++)
	{
		x=fib(i);
	//	cout<<x<<endl;
		if(x>4000000)
		break;
		if(x%2==0)
		{
			sum+=x;
		}
		
	}
	cout<<sum;
	return 0;
}

int fib(int n)
{
	int i;
	int f1=1;
	int f2=1;
	if(n==0||n==1)
	{
		return f1;
	}else
	{
		for(i=1;i<n;i++)
		{
		f1=f1+f2;
		f2=f1-f2;
		}
		return f1;
	}
}
