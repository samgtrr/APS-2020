#include <iostream>
using namespace std;

int main() {
 // your code goes here
 int t, a,f,l;
 //for(int i=0; i<12; i++) arr[i]=pow(2, i);
 cin>>t;
 while(t--) {
  cin>>a;
  l=a%10;
  while(a!=0) 
  {
      f=a%10;
      a=a/10;
      
  }
  cout<<f+l<<endl;
 }
 return 0;
}