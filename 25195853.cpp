		
#include<iostream>
using namespace std;
int main()
{
	long int a, b, x, y, t, hcf, lcm,c;
	cin>>c;
	while(c--)
	{
    	cin>>x>>y;
    	a=x;
    	b=y;
    	while(b!=0)
    	{
    		t=b;
    		b=a%b;
    		a=t;
    	}
    	hcf=a;
    	lcm=(x*y)/hcf;
    	cout<<hcf<<" "<<lcm<<endl;
	}
}
