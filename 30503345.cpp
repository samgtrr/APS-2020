// #include <iostream>
#include <bits/stdc++.h>
#define uu __builtin_popcount
// #define ll long long int
using namespace std;

int main()
{
    int t, n, q, od, i;
    int a[100001], qu;
    scanf("%d", &t);
    while(t--)
    {
        od=0;
        scanf("%d%d", &n, &q);
        for(i=0; i<n; i++) scanf("%d", &a[i]);
        for(i=0; i<n; i++)
        {
            if(uu(a[i])%2==0) od++;
        }
        
        while(q--)
        {
            scanf("%d", &qu);
            if(uu(qu)%2==0) printf("%d %d\n", od, n-od);
            else printf("%d %d\n", n-od, od);
        }
    }
    return 0;
}