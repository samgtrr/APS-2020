#include <iostream>
using namespace std;

int main() {
	long long int t,x,y,k,n,p,c,j;
	
	cin>>t;
	while(t--)
	{   long long int flag=0;
	    cin>>x>>y>>k>>n;
	    j=x-y;
	     for(int i=0;i<n;i++)
	     {  
	          cin>>p>>c;
           if(k>=c && y+p>=x)
			{
				flag=1;
			}
	     }
	   	    if(flag)
    	    printf("LuckyChef\n");
    	    else
    	    printf("UnluckyChef\n");
    	
	}
	return 0;
}