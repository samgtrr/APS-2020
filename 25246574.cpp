#include<stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    long int t,n,s1=0,s2=0;
    //cin>>t;
    //while(t--)
  //  {
      s1=s2=0;
      cin>>n;
      long int a[n],b[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
          s1+=a[i];
      }
      for(int i=0;i<n;i++){
          b[i]=i+1;
          s2+=b[i];
      }
      if(s1==s2)cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
  //  }
    
    return 0;
} 