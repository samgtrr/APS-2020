#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
        
    int a,b,c,d,t,j;
    cin>>t;
    while(t--)
    {
       cin >>a>>b;
       c=d=0;
       for(int i=1;i<1000;i++)
       {
           if(i%2==1)
           {
             c+=i;
             if(a-c<0){cout<<"Bob"<<endl;break;}
           }
           if(i%2==0)
           {
             d+=i;
             if(b-d<0){cout<<"Limak"<<endl;break;}
           }
       }
    }
   return 0;
}