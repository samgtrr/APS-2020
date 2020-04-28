
#include <bits/stdc++.h> 
using namespace std; 
#include<string.h>
 
int main() 
{ 
    int t,n,a=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char g[n];
        for(int i=0;i<n;i++)cin>>g[i];
        for(int i=0;i<n;i++)
        {
            if(g[i]=='Y')a=1;
            if(g[i]=='I')a=2;
            
        }
        if(a==1)cout<<"NOT INDIAN"<<endl;
        if(a==2)cout<<"INDIAN"<<endl;
        if(a==0)cout<<"NOT SURE"<<endl;
        a=0;
    }
    return 0;
}