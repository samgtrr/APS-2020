
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int n,l=0,nl=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)l++;
        else
            nl++;
    }
    if(l>nl)cout<<"READY FOR BATTLE"<<endl;
    else
        cout<<"NOT READY"<<endl;
     return 0;
} 