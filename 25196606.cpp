#include<stdio.h>
#include <bits/stdc++.h> 
using namespace std; 
#include<string.h>
int main() 
{ 
    long int t,m,n;
    cin>>t;
    string s1,s2,c;
    while(t--)
    {
        cin>>s1>>s2;
        m=n=s1.length();
        for(int i=0;i<s1.length();i++)
        {
            c[i]=s1[i]-s2[i];
        }
        for(int i=0;i<s1.length();i++)
        {
            if(c[i]=='\0' || s1[i]=='?'||s2[i]=='?')m--;
            if(c[i]=='\0' && s1[i]!='?'&&s2[i]!='?')n--;
        }
        cout<<m<<" "<<n<<endl;
        
    }
    return 0;
} 