#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int a, n, k;
    cin>>a>>n>>k;
    int arr[k]={0};
    while(a){
        int j=0;
        arr[j]++;
        while(arr[j]>n && j<k){
            arr[j]=0;
            j++;
             arr[j]++;
        }
        
        a--;    }
    
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    
	return 0;
}
