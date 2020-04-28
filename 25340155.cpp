#include <iostream>
#include<vector>
using namespace std;
typedef long long int ll;
int main() {
    ll n=1299711,t,k;
    vector<ll> arr(n,0);
    vector<ll> check;
    //ll a[1,299711];
    
    for(ll i=2;i<n;i++)
    {
        if(arr[i]==0)
            {
                for(ll j=2*i;j<n;j+=i)
                    arr[j]=1;
                check.push_back(i);    
            }
    }
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<check[k-1]<<endl;
    }
    //cout<<check[100000-1];
	// your code goes here
	return 0;
}