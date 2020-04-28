#include <iostream>
#include <cstdio>
using namespace std;

int main() {
 // your code goes here
 int n,k,ti,c=0;
 cin>>n>>k;
  while (n--) {
  cin>>ti;
  if(ti%k==0) c++;
 }
 cout<<c;
 return 0;
}