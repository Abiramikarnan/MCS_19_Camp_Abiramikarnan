#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cin>>row>>col;
    int arr[row][col],b[col][row];
    for(i=0;i<row;i++)
{
        for(j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            b[i][j]=arr[j][i];
        }
        
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
          cout<<b[i][j]<<" ";
        }
     cout<<endl;   
    }
    
        
    
    return 0;
}
