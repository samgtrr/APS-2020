
#include <bits/stdc++.h> 
using namespace std; 
#include<string.h>
 
int main() 
{ 
    int t;
    char id;
    cin>>t;
    while(t--)
    {
        cin>>id;
        if(id=='B'||id=='b')cout<<"BattleShip"<<endl;
        if(id=='C'||id=='c')cout<<"Cruiser"<<endl;
        if(id=='D'||id=='d')cout<<"Destroyer"<<endl;
        if(id=='F'||id=='f')cout<<"Frigate"<<endl;
    }
    return 0;
} 