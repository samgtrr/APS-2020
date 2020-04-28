#include <iostream>
using namespace std;

int main() {
    long int t,i,num;
    cin>>t;
    while(t--){
        long int sum=0,n,c,a[100];
        cin>>n>>c;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum +=a[i];
        }
        if(sum <= c)
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
    return 0;
}
