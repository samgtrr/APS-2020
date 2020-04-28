
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int t,n,m,rem=0,res=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n;
        while(n!=0)
        {
            rem=n%10;
            res=res*10+rem;
            n=n/10;
        }
        
        if(res==m)cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;
            res=0;
    }
    return 0;
} 