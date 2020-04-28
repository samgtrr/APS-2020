#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int t,a,n,rem=0,rev=0;
   cin>>n;
   for(int i=0; i<n; i++){
    cin>>a;
    while(a!=0){
        rem = a%10;
        rev = rev*10 + rem;
        a/=10;
    }
    cout<<rev<<endl;
    rev=0;
   }
   return 0;
}