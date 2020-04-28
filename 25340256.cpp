#include <bits/stdc++.h>
using namespace std;
int main() {
    int ar[1000001]={0};
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    for(int i=0;i<n1;++i)
    {int tmp;cin>>tmp;ar[tmp]++;}
    for(int i=0;i<n2;++i)
    {int tmp;cin>>tmp;ar[tmp]++;}
    for(int i=0;i<n3;++i)
    {int tmp;cin>>tmp;ar[tmp]++;}
    int c=0;
    vector<int> a;
    for(int i=0;i<=1000001;++i)
    if(ar[i]>1)
    c++,a.push_back(i);
    cout<<c<<endl;
    for(int i=0;i<a.size();++i)
    cout<<a[i]<<endl;
    
	return 0;
}
