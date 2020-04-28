#include <iostream>
using namespace std;

int main() {
 // your code goes here
 int t;
 long int a,b;
 cin>>t;
 while(t--)
 {
     cin>>a;
     b=0;
     while(a!=0)
     {
        b=b+a%10;
        a=a/10;
     }
     cout<<b<<endl;
 }
 return 0;
}