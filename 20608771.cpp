#include <stdio.h>
#include <math.h>
int main(){
long long int b,n,B=0,t,N,r;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&N);
N=N-1;
b=N%26;
B=N/26;
r=pow(2,B);
if(b==0 || b ==1)
printf("%lld 0 0\n",r);
else if(b>=2 && b<10)
printf("0 %lld 0\n",r);
else
printf("0 0 %lld\n",r);
}
}