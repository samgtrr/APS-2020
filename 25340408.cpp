#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    int t;cin>>t;
    while(t--){
        int f=0;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]!=s[0])
                f=1;
            }
            if(i%2==1){
                if(s[i]!=s[1])
                f=1;
            }
        }
        if(s[0]==s[1])
        f=1;
        if(f==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
