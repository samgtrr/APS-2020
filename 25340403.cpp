#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n,cnt=0;
	cin>>n;
	
	while(n>0){
	    n=n/10;
	    cnt++;
	}
	
	if(cnt > 3){
	    cout<<"More than 3 digits";
	}
	else cout<<cnt;
	return 0;
}
