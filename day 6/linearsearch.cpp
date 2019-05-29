#include<iostream>
using namespace std;
int main()
{
    int n,ele,i;
    int index=-1;
    
    cin>>n;
    int arr[n];
    cin>>ele;;
    for(i=0;i<n;i++)
    {
    	
        cin>>arr[i];
        if(arr[i]==ele)
        {
           index=i+1;
          
        }
        else
        {
        	
            continue;
        }
        
    }
    if(index>0)
    {
    	cout<<index;
    }
    else
    {
    	cout<<-1;
    }
    return 0;
}
