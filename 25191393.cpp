
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    long int c=0,i=5,n,t, a[]={1,2,5,10,50,100};
    cin>>t;
    while(t--)
    {
      cin>>n;
      while(n!=0)
      {
       
          while(a[i]<=n)
          {
            n-=a[i];
            c++;
            //cout<<n<<endl;
          }
           i--;
           
      }
      i=5;
       
      cout<<c<<endl;
        c=0;
    }
     return 0;
} 