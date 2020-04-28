#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    while(n>0){
        if(n&1==1)
            cout << (1<<c) << " ";
        c++;
        n>>=1;
    }   
}