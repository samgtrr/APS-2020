#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int array[100000],i=0,x;
        while(cin>>x)
        {
            array[i++]=x;
            if(cin.peek()=='\n')
                break;
        }
        sort(array,array+i);
        if(array[i-1]==(i-1))
	    {
	        cout<<array[i-2]<<endl;
	    }
	    else
	    {
	        cout<<array[i-1]<<endl;
	    }
    }
    return 0;
}