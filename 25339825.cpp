#include <iostream>

using namespace std;

int main()
{int t,g,i,j,k,a[10],c[20000];
   
   cin>>t;
   
   for(i=1;i<=t;i++)
   {cin>>g;
   for(j=1;j<=g;j++)
   {for(k=1;k<=3;k++)
   {
   cin>>a[k];
   }
    if(a[2]%2!=0)
    {
	if(a[1]==1&&a[3]==1)
    c[j]=(a[2]/2);
    else if(a[1]==1&&a[3]==2)
    c[j]=a[2]/2+1;
 else if(a[1]==2&&a[3]==1)
 c[j]=a[2]/2+1;
 else 
 c[j]=a[2]/2;
}
else
c[j]=a[2]/2;
   
   }
    for(j=1;j<=g;j++)
  {
  cout<<c[j]<<"\n";
}
   }
 
   
   return 0;
}