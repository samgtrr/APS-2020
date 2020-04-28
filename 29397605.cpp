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
	long long int t,n;
	cin>>t;
	while(t--)
	{
	    //s=0;
	    cin>>n;
	    long long int a[n],b[n],m,s=0,i,k;
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++)cin>>b[i];
	    sort(a,a+n);
	    sort(b,b+n);
	   for(i=0;i<n;i++)
	   {
	       if(a[i]>=b[i])s+=b[i];
	       else
	       {
	           s+=a[i];
	       }
	   }
	 cout<<s<<endl;
	    
	}
	return 0;
}