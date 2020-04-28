#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int b=-99999;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        b=max(b,a[i]);
	    }
	    cout<<b<<endl;
	}
	return 0;
}