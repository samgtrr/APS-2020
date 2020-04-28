#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t, n, a[10000];
	cin>>t;
	
	while(t--){
	    int cnt=0;
	    cin>>n;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=1;i<n;i++){
	        if(a[i]>a[i-1]){
	            a[i]=a[i-1];
	        }
	        
	        else{
	            cnt++;
	        }
	    }
	    
	    cout<<cnt+1<<endl;
	}
	return 0;
}
