#include<bits/stdc++.h>
using namespace std;
int main()
{
        
    int t;
    cin>>t;
   // long int a,b,c;
    while(t--)
    {
        long int n[3];
        for(int i=0;i<3;i++)cin>>n[i];
        sort(n,n+3); 
        cout<<n[1]<<endl;
    }
   return 0;
}