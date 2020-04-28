#include<stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    long int t,n;
    cin>>t;
    while(t--)
    {
      
     int n;
     cin>>n;
     if((360%n)==0)
     cout<<"y"<<endl;
     else
     cout<<"n"<<endl;
     
     if(n<=360)
     cout<<"y"<<endl;
     else
     cout<<"n"<<endl;
     
     if(n<27)
     cout<<"y"<<endl;
     else
     cout<<"n"<<endl;
     
    }
    
    return 0;
} 