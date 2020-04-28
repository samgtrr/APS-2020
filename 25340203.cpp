#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n,a[1000000],invert=0,linvert=0;
	    cin>>n;
	    
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]>a[j]){
	                invert++;
	            }
	        }
	    }
	    
	    for(int i=0;i<n-1;i++){
	        if(a[i]>a[i+1]){
	            linvert++;
	        }
	    }
	    
	    if(invert == linvert){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
