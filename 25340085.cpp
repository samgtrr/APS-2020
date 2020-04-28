#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,c;
        cin>>a>>b>>n;
        if(n%2!=0)
            a*=2;
        if(b>a)
        {
            c=b;
            b=a;
            a=c;
        }
        a/=b;
        cout<<a<<"\n";
    }
}