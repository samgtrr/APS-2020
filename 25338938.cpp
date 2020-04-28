#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; char s1[10], s2[10];
	cin>>t;
	
	while(t--){
	    
	    int found = 0;
	    int i=0;
	    cin>>s1;
	    cin>>s2;
	    
	    while(s1[i]!='\0'){
	        if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i]){
	            found=1;
	        }
	        
	        i++;
	    }
	    
	    if(found==0){
	        cout<<"Yes"<<endl;
	    }
	    
	    else{
	        cout<<"No"<<endl;
	    }
	}
	
	return 0;
}
