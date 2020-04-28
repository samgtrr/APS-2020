#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,f;
	cin>>t;
	while(t--)
	{
	    cin>>f;
	    if(f==1||f==0)
	    {
	     f=1;
	     cout<<f<<endl;   
	    }
	    else
	    {
	        a=f;
    	    for(int i=1;i<a;i++)
    	    {
    	      f=f*i;  
    	    } 
    	   cout<<f<<endl; 
	    }
	   
	}
	return 0;
}
