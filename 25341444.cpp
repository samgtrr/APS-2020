#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n,a[10000000],sum=0,cnt=0;
	    cin>>n;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    
	    if(sum%n!=0){
	        cout<<-1<<endl;
	    }
	    
	    else{
	        int k= sum/n;
	        
	        for(int i=0;i<n;i++){
	            cnt+=abs(k-a[i]);
	        }
	        
	        cout<<cnt<<endl;
	    }
	    
	}
	
	
	return 0;
}
