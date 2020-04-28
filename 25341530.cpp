#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>
using namespace std;

int main() 
{ 
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,l=0;
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=k)
            {
                l++;
            }
        }
        cout<<l<<endl;
    }
}
