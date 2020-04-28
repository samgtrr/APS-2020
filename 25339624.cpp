#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t, n;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    int i=0, count=0;
	    char s[n];
        cin>>s;
	    
	    while(s[i+1]!='\0'){
	        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
	            if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u'){
	                count++;
	            }
	        }
            i++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
