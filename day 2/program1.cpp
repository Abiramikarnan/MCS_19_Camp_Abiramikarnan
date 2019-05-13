// to find the sum of multiples of 3 and 5

  #include <iostream>
    using namespace std;
     
    int main() {
    	// your code goes here
    	int i,c=0;
    	for(i=1;i<1000;i++)
    	{
    		if(i%3==0||i%5==0)
    		{
    			c+=i;
    		}
    	}
    	cout<<c;
    	return 0;
    }
