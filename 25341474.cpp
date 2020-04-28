#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	
	string s;
	
	map<char,char> arr;
	
	char c1='A';
	char c2='D';
	
	for(int i=0;i<26;i++){
	    arr[c1]=c2;
	    c1++;
	    c2++;
	}
	
	arr['X']='A';
	arr['Y']='B';
	arr['Z']='C';
	
/*	for(auto i:arr){
	    cout<<i.first<<" "<<i.second<<endl;
	}*/
	
	cin>>s;
	
	for(int i=0;i<s.length();i++){
	    cout<<arr[s[i]];
	}
	
	
	return 0;
}
