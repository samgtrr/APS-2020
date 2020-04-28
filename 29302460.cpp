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
	long long int t,n,a[100],p,c;
	
	cin>>t;
	while(t--)
	{   p=c=0;
	    cin>>n;
	    for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        p=a[0];
        for(int i=0;i<n;i++)
        {
         c+=(a[i]-p);
        }
        cout<<c<<endl;
	   
	}
	return 0;
}