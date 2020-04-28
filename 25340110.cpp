#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	char s[1000000];
	
	while(t--){
	    cin>>s;
	    
	    char *p = strstr(s, "101");
	    char *q = strstr(s, "010");
	    
	    if(p || q){
	        cout<<"Good"<<endl;
	    }
	    
	    else{
	        cout<<"Bad"<<endl;
	    }
	}
	return 0;
}
