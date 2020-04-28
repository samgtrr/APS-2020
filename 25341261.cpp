#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    string s; int sum=0;
	    cin>>s;
	    
	    for(int i=0;i<s.length();i++){
	        sum+=int(s[i])-96;
	    }
	    
	    cout<<sum<<endl;
	}
	
	return 0;
}
