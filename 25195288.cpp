#include<stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
#include<string.h>
 
int main() 
{ 
    int t,x[3],y[3],r;
    cin>>t;
    while(t--)
    {
        cin>>r;
        for(int i=0;i<3;i++)cin>>x[i]>>y[i];
        float a1=0,a2=0,a3=0;
        a1=sqrt((pow((x[2]-x[1]),2))+(pow((y[2]-y[1]),2)));
        a2=sqrt((pow((x[1]-x[0]),2))+(pow((y[1]-y[0]),2)));
        a3=sqrt((pow((x[2]-x[0]),2))+(pow((y[2]-y[0]),2)));
        if((a1>r&&a2>r)||(a1>r&&a3>r)||(a3>r&&a2>r))cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
} 