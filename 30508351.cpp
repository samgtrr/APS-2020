#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,s;
        cin>>r>>s;
        int c=18;
        int x = (r+s)/2;
        if(r==s==1)
        {
        cout<<c<<endl;
        cout<<8<<" "<<8<<endl;
        cout<<7<<" "<<7<<endl;
        cout<<8<<" "<<6<<endl;
        cout<<3<<" "<<1<<endl;
        cout<<1<<" "<<3<<endl;
        cout<<2<<" "<<4<<endl;
        cout<<1<<" "<<5<<endl;
        cout<<5<<" "<<1<<endl;
        cout<<6<<" "<<2<<endl;
        cout<<7<<" "<<1<<endl;
        cout<<1<<" "<<7<<endl;
        cout<<2<<" "<<8<<endl;
         cout<<8<<" "<<2<<endl;
        cout<<7<<" "<<3<<endl;
        cout<<8<<" "<<4<<endl;
        cout<<4<<" "<<8<<endl;
        cout<<5<<" "<<7<<endl;
        cout<<6<<" "<<8<<endl;
        }
       
        else if(r==s>1)
        {
        cout<<c+1<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<8<<" "<<8<<endl;
        cout<<7<<" "<<7<<endl;
        cout<<8<<" "<<6<<endl;
        cout<<3<<" "<<1<<endl;
        cout<<1<<" "<<3<<endl;
        cout<<2<<" "<<4<<endl;
        cout<<1<<" "<<5<<endl;
        cout<<5<<" "<<1<<endl;
        cout<<6<<" "<<2<<endl;
        cout<<7<<" "<<1<<endl;
        cout<<1<<" "<<7<<endl;
        cout<<2<<" "<<8<<endl;
         cout<<8<<" "<<2<<endl;
        cout<<7<<" "<<3<<endl;
        cout<<8<<" "<<4<<endl;
        cout<<4<<" "<<8<<endl;
        cout<<5<<" "<<7<<endl;
        cout<<6<<" "<<8<<endl;
        }
        else
        {
        cout<<c+2<<endl;
        cout<<x<<" "<<x<<endl;
        cout<<"1"<<" "<<"1"<<endl;
        cout<<8<<" "<<8<<endl;
        cout<<7<<" "<<7<<endl;
        cout<<8<<" "<<6<<endl;
        cout<<3<<" "<<1<<endl;
        cout<<1<<" "<<3<<endl;
        cout<<2<<" "<<4<<endl;
        cout<<1<<" "<<5<<endl;
        cout<<5<<" "<<1<<endl;
        cout<<6<<" "<<2<<endl;
        cout<<7<<" "<<1<<endl;
        cout<<1<<" "<<7<<endl;
        cout<<2<<" "<<8<<endl;
    cout<<8<<" "<<2<<endl;
    cout<<7<<" "<<3<<endl;
        cout<<8<<" "<<4<<endl;
        cout<<4<<" "<<8<<endl;
        cout<<5<<" "<<7<<endl;
        cout<<6<<" "<<8<<endl;
        }/*
        cout<<8<<" "<<8<<endl;
        cout<<7<<" "<<7<<endl;
        cout<<8<<" "<<6<<endl;
        cout<<3<<" "<<1<<endl;
        cout<<1<<" "<<3<<endl;
        cout<<2<<" "<<4<<endl;
        cout<<1<<" "<<5<<endl;
        cout<<5<<" "<<1<<endl;
        cout<<6<<" "<<2<<endl;
        cout<<7<<" "<<1<<endl;
        cout<<1<<" "<<7<<endl;
        cout<<2<<" "<<8<<endl;
        cout<<8<<" "<<2<<endl;
        cout<<7<<" "<<3<<endl;
        cout<<8<<" "<<4<<endl;
        cout<<4<<" "<<8<<endl;
        cout<<5<<" "<<7<<endl;
        cout<<6<<" "<<8<<endl;*/
    }
}