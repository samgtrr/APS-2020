#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n, k, a[1000000], sonw=0,dadw=0;
	    
	    cin>>n>>k;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    sort(a,a+n);
	    
	    if(k<=n-k){
	    
	    for(int i=0;i<k;i++){
	        sonw+=a[i];
	    }
	    
	    for(int i=k;i<n;i++){
	        dadw+=a[i];
	    }
	    }
	    else{
	         
	    for(int i=0;i<n-k;i++){
	        sonw+=a[i];
	    }
	    
	    for(int i=n-k;i<n;i++){
	        dadw+=a[i];
	    }
	    }
	    
	    
	    cout<<dadw-sonw<<endl;
	    
	}
	return 0;
}
