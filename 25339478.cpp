#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int t, n, k, a[10000];
	cin>>t;
		while(t--){
	    cin>>n>>k;
	    	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    	    sort(a, a+n);
	    	    if((n-1+k)%2==0){
	        cout<<a[(n-1+k)/2]<<endl;
	    }
	    
	    
	}
	return 0;
}
