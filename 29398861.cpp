#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <bitset>
#include <string.h>
using namespace std;

int main() {
	long long int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    long long int a[n],b[n],m=0,s=0,i,l;
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n-1;i++)m+=a[i]%k;
	    s=(a[n-1]+m)%k;

	        cout<<s<<endl;
	    
	}
	return 0;
}