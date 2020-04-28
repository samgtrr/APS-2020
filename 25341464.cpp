#include<bits/stdc++.h>
using namespace std;
int main()
{
int d,m,y;
cin>>d>>m>>y;
int days=0;
int m_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
for(int years=1990;years<y;years++)
{
if(years%4==0)
days+=366;
else
days+=365;
}
for(int month=1;month<m;month++)
{
if(month==2)
{
 if(y%4==0)
 {
  days++;
 }
}
days+=m_days[month];
}

days+=d;
switch(days%7)
{
case 1:cout<<"Monday";break;
case 2:cout<<"Tuesday";break;
case 3:cout<<"Wednesday";break;
case 4:cout<<"Thursday";break;
case 5:cout<<"Friday";break;
case 6:cout<<"Saturday";break;
case 0:cout<<"Sunday";break;
}
return 0;
}
