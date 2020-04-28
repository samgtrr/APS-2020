#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	long long int t,n,c1;
	cin>>t;
	while(t--){
	    cin>>n;
	    c1=0;
		long long int a[n],b[n],c[n];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		for(int i=0;i<n;i++){
		    c[0]=a[0];
		    if(i!=0){
		    c[i]=a[i]-a[i-1];}
		}
		for(int i=0;i<n;i++){
		    if(c[i]>=b[i])c1++;}
		cout<<c1<<endl;
		}
	return 0;
}