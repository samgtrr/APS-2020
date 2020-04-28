#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	
	int t,k=0;
	char c='a';
	cin>>t;
	
	map<char,int> arr;
	
	for(int i=0;i<26;i++){
	    if(i%5==0){
	        k=0;
	    }
	    
	    arr[c]=k;
	    c++;
	    k++;
	}
	
	while(t--){
	    string s;
	    cin>>s;
	    int sum=0;
	    
	    for(int i=0;i<s.length();i++){
	        sum+=arr[s[i]];
	    }
	    
	    cout<<sum<<endl;
	}
	

	
	
	return 0;
}
