#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define mkp make_pair
#define pi pair<int,int>
#define push push
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
// int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
// int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<<endl;}}
#define print1d(mat,n){for(int i=0;i<(int)(n);i++)cout<<mat[i]<<" ";cout<<endl;}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<endl;
#define init(v,x) for (auto &itr:v){itr=x;}
#define minpq(x) x,vector<x>,greater<x>
#define ln length()
#define sz size()
#define inf 1e18;
using namespace std;

int32_t main()
{

    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
    int a[n],c=0,k=0,b[n]={0},p=0;
    rep(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        b[i]=a[i]-i;
    }
    /*rep(i,0,n)
    {
      if(b[i]<0)b[i]=0;
    }*/
    rep(i,0,n)
    {
        if(b[i]>0)
        {
      c= (c+b[i])%1000000007;
            
        }
    }
    cout<<c<<"\n";
} 
    return 0;
}