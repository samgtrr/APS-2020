
#include<bits/stdc++.h>
using namespace std;

typedef long long kk;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
	string s;
        int n,i,c=0;
	kk ladoo=0;
	cin >> n >> s;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                c++;   
                ladoo+=(long long)(c);
            }
		 
        }
	cout << ladoo << endl;
    }
    return 0;
}