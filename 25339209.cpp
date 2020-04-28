#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t, k, count, n;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    k=1, count=0;
	    
	    while(n>=1){
	        if(n%2!=0){
	            count+=k*k;
	        }
	        
	        n--;
	        
	        k++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
