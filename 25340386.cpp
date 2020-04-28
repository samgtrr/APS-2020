#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,q;
    long long int a;
    cin>>t;
    while(t--)
    {
        long long int p=1000000;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a<=p)
                p=a;
        }
        q=p*(n-1);
        cout<<q<<endl;
    }
	return 0;
}
