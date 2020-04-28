#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	string s;
	cin>>t;
	
	while(t--){
	    int cnt=0;
	    cin>>s;
	    
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R'){
	            cnt++;
	        }
	        
	        else if(s[i]=='B'){
	            cnt+=2;
	        }
	    }
	    
	    cout<<cnt<<endl;
	}
	return 0;
}
