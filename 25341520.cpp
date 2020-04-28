#include<iostream>
using namespace std;
int main()
{
    int n,f,s,next,i;
    cin>>f>>s>>n;
    for(i=0;i<n-2;i++){next=f+s;f=s;s=next;}
    cout<<next<<endl;
}
