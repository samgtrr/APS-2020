#include <iostream>
using namespace std;


bool check(int n){
    int k=n,sum=0;
    
    while(n>0){
        int x=n%10;
        sum+=x*x*x;
        n/=10;
    }
    
    if(sum==k) return true;
    else return false;
}



int main() {
	// your code goes here
	int n,m;
	
	cin>>n>>m;
	
	for(int i=n;i<=m;i++){
	    if(check(i)){
	        cout<<i<<endl;
	    }
	}
	
	return 0;
}
