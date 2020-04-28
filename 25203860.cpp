#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
        
    long long int n,t,s,p,c;
    cin>>t;
    while(t--)
    {
       cin >>n;
       long long int a[n];
       for(int i=0;i<n;i++)cin>>a[i];
       s=c=0;p=1;
       for(int i=0;i<n;i++){
            for(int j=i;j<n;j++)
               {
                   s+=a[j];
                   p*=a[j];
                   if(s==p)c++;
                   //cout<<s<<" "<<p<<" "<<c<<"\t";
               }
            s=0;p=1;}
    cout<<c<<endl;
    }
   return 0;
}