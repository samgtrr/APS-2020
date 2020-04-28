#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
        
    long long int k,n,c,t,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>k;
        for(i=0;i<n;i++)
            if(i==k-1)c=a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
            if(a[i]==c)k=i+1;
        cout<<k<<endl;
        
    }
   return 0;
}