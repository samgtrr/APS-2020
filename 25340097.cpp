#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,n,flag;
	    cin>>m>>n;
	    if(m==1){
            m++;
	    }
        for(int i=m;i<=n;i++){
            flag = 0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j == 0){
                    flag++;
                    break;
                }
            }
            if(flag == 0){
                cout<<i<<endl;
            }
        }

        cout<<endl;
	}
	return 0;
}
