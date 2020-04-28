#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t, n;
	cin>>t;
	
	while(t--){
	    int count = 0;
	    cin>>n;
	    
	    
	    while(n > 0){
	        int k = sqrt(n);
	        n = n - k*k;
	        count++;
	    }
	    
	    cout<<count<<endl;
	}
	    
	return 0;
}
