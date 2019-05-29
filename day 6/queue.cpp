#include<iostream>
using namespace std;
int main()
{
  int count=0,rear=0,front=0;
    int n,i;
    char ch;
    cin>>n;
    char q[n];
    for(i=0;i<n;i++)
    {
        cin>>ch;
        if(ch=='E')
        {
            char x;
          cin>>x;
          q[rear]=x;
          rear++;
          count++;
          cout<<count<<endl;
         //cout<<q[rear]; 
        }
        else if(ch=='D')
        {
            if(rear==front)
            {
            cout<<-1 <<" "<<count<<endl;   
            }
            else
            {
            //	char x;
                count--;
               
                cout<<q[front]<<" "<<count<<endl;
                q[front]=0;
                front++;
            }
        }
    }
    return 0;
}
