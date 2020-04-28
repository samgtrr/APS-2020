#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int l,b;
	cin>>l>>b;
	
	int area = l*b;
	int peri = 2*(l+b);
	
	if(area>peri){
	    cout<<"Area"<<endl<<area;
	}
	else if(peri>area){
	    cout<<"Peri"<<endl<<peri;
	}
	else cout<<"Eq"<<endl<<peri;
	return 0;
}
