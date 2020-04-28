#include <iostream>
using namespace std;

int main() {
		int t, n, k, a;
		cin>>t;
		while(t--){
	    cin>>n>>k;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        if(k>=a){
	            cout<<1;
	            k-=a;
	        }
	        else{
	            cout<<0;
	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}
