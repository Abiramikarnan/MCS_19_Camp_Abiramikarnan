#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-1-i;j++)
       {
           if(arr[j]>arr[j+1])
           {
               int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
           }
       }
    }
}
void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    // your code goes here
    int arr[]={2,8,9,6,7};
    int n=5;
    bubble(arr,n);
    printarray(arr,n);
    return 0;
}
