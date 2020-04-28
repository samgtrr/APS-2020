#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t,n,a[100000];
	cin>>t;
	
	while(t--){
	    int pos=0, sum1=0, sum2=0;
	    cin>>n;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        
	        sum1=0, sum2=0;
	        
	        for(int k=0;k<i;k++){
	            sum1+=a[k];
	        }
	        if(i!=n-1)
	        {for(int j=i+1;j<n;j++){
	            sum2+=a[j];
	        }
	        }
	      //  cout<<sum1<<" "<<sum2<<endl;
	        if(sum1==sum2){
	            pos = i;
	            break;
	        }
	    }
	    
	    if(pos==0){
	        cout<<"NO EQUILIBRIUM"<<endl;
	    }
	    
	    else cout<<a[pos]<<endl;
	}
	return 0;
}
