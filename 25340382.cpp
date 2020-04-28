#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,m,k;
	    
	    cin>>n>>m>>k;
	    
	    while(k--){
	        if(n>=m){
	            if(n-m==0){
	                break;
	            }
	            m++;
	        }
	        else{
	            if(m-n==0){
	                break;
	            }
	            
	            n++;
	        } 
	    }
	    
	    if(n>=m){
	        cout<<n-m<<endl;
	    }
	    else cout<<m-n<<endl;
	}
	return 0;
}
