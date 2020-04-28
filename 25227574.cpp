#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 // your code goes here
 double t, p, s;
 cin>>t;
 while(t--) {
  cin>>p>>s;
  cout<<fixed<<setprecision(2)<<(pow((p-(sqrt(pow(p, 2)-(24*s))))/12, 2)*((p/4)-(2*((p-(sqrt(pow(p, 2)-(24*s))))/12))))<<endl;
 }
 return 0;
}

