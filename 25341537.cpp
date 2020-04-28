#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int x,y,r1,r2,c1,c2,a[10000][10000];
	cin>>x>>y;
	
	for(int i=0;i<x;i++){
	    for(int j=0;j<y;j++){
	        cin>>a[i][j];
	       
	    }
	}
	
	for(int i=0;i<x;i++){
	    for(int j=0;j<y;j++){
	        
	         if(a[i][j]==1){
	            r1=i;
	            c1=j;
	        }
	        
	        if(a[i][j]==2){
	            r2=i;
	            c2=j;
	        }
	    }
	}
	
//	cout<<r1<<endl;
	
	cout<<abs(r1-r2)+abs(c1-c2);
	
	
	
	
	
	return 0;
}
