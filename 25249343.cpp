#include <iostream>
using namespace std;


int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n, k;
	    cin >> n >> k;
	    string arr[n];
	    for(int i = 0; i < n; ++i) {
	        cin >> arr[i];
	    }/*for(int i = 0; i < n; ++i) {
	        cout<<arr[i];
	    }
	    cout<<endl;*/
	    string values[n];
	    for(int i = 0; i < n; ++i) {
	        values[i] = "NO";
	    }
	    /*
	    for(int i = 0; i < n; ++i) {
	        cout<<values[i];
	    }
	    cout<<endl;*/
	    int num;
	    string temp;
	    
	    while (k-- > 0) {
	        cin >> num;
	        string newArr[num];
	        
	        for(int x = 0; x < num; ++x) {
	            cin >> newArr[x];
	        }
	        
	   /* for(int i = 0; i < num; ++i) {
	        cout<<newArr[i];
	    }
	    cout<<endl;*/
	        for(int x = 0; x < n; ++x) {
	            for(int y = 0 ; y < num; ++y) {
	                if(arr[x] == newArr[y]) {
	                    values[x] = "YES";
	                }
	            }
	        }
	    }
    	 
	    for(int i = 0; i < n; ++i) {
	        cout << values[i] << " ";
	    }
	   
        cout << endl;
	}
	return 0;
}