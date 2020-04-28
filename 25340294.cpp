#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){

int t;
cin>>t;

while(t--){
double a,b;

cin>>a>>b;

if(b>a)
    cout<<sqrt(pow(b,2) - pow(a,2))<<" "<<sqrt(pow(a,2) + pow(b,2))<<endl;
else
    cout<<sqrt(pow(a,2) - pow(b,2))<<" "<<sqrt(pow(a,2) + pow(b,2))<<endl;

}

}
