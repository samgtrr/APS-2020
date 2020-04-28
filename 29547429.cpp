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
	long long int t,n,c=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    char a[n];
	    long long int b[n],max,d[4][4]={0},s=0,i,j,l,m[4]={0},o,p,q,r,z=0,u=0,k,i1,i2,i3,j1,j2,j3,check=-100000000;
	    max=0;
	    
	    for(i=0;i<n;i++)cin>>a[i]>>b[i];
	    for(i=0;i<4;i++)m[i]=-100;
	    for(i=0;i<n;i++){
	        if(b[i]==12 && a[i]=='A')d[0][0]+=1;
	        else if(b[i]==12 && a[i]=='B')d[0][1]+=1;
	        else if(b[i]==12 && a[i]=='C')d[0][2]+=1;
	        else if(b[i]==12 && a[i]=='D')d[0][3]+=1;
	        else if(b[i]==3 && a[i]=='A')d[1][0]+=1;
	        else if(b[i]==3 && a[i]=='B')d[1][1]+=1;
	        else if(b[i]==3 && a[i]=='C')d[1][2]+=1;
	        else if(b[i]==3 && a[i]=='D')d[1][3]+=1;
	        else if(b[i]==6 && a[i]=='A')d[2][0]+=1;
	        else if(b[i]==6 && a[i]=='B')d[2][1]+=1;
	        else if(b[i]==6 && a[i]=='C')d[2][2]+=1;
	        else if(b[i]==6 && a[i]=='D')d[2][3]+=1;
	        else if(b[i]==9 && a[i]=='A')d[3][0]+=1;
	        else if(b[i]==9 && a[i]=='B')d[3][1]+=1;
	        else if(b[i]==9 && a[i]=='C')d[3][2]+=1;
	        else if(b[i]==9 && a[i]=='D')d[3][3]+=1;
	    }

	    for(int i=0;i<4;i++){
	        
	    for(int j=0;j<4;j++){
        m[0]=d[i][j];
        l=i;q=j;

        for (int i1 = 0; (i1<4); i1++) {
        for (int j1 = 0; j1 < 4; j1++) { 
            if (i1!=l && j1!=q && d[i1][j1] > m[1]) { 
                m[1] = d[i1][j1];o=i1;r=j1;z++;

            }
        }}z=0;
        for (int i2 = 0; (i2<4 ); i2++) {
        for (int j2 = 0; j2 < 4; j2++) {
            if (i2!=l && i2!=o && j2!=q && j2!=r && d[i2][j2] > m[2]) { 
                
                m[2] = d[i2][j2];z++;p=i2;k=j2;
            }
        }}z=0;
        for (int i3 = 0; (i3<4 ); i3++) {
        for (int j3 = 0; j3 < 4; j3++) {
            if (i3!=l && i3!=o && j3!=q && j3!=r && i3!=p && j3!=k && d[i3][j3] > m[3]) { 
                
                m[3] = d[i3][j3];z++;
            }
        }}z=0;
	        sort(m,m+4);
	        for(int i5=0;i5<4;i5++){
	            if(i5==0 && m[i5]!=0)m[i5]=m[i5]*25;
	            else if(i5==1 && m[i5]!=0)m[i5]=m[i5]*50;
	            else if(i5==2 && m[i5]!=0)m[i5]=m[i5]*75;
	            else if(i5==3 && m[i5]!=0)m[i5]=m[i5]*100;
	            else if(m[i5]==0)m[i5]=m[i5]-100;
	        }
	        s=0;
	        for(int i5=0;i5<4;i5++){
	            s+=m[i5];
	        }
	        if(s>check)check=s;
	        s=0;
	         for(int i5=0;i5<4;i5++)m[i5]=-100;
	    }}
	    cout<<check<<"\n";
	       c+=check;
	}
	
	cout<<c<<endl;
	return 0;
}
