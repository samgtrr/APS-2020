#include<stdio.h>
#include<iostream>
using namespace std;
int help(int help)
{
help=help++;
return help;
}
int main()
{
int test=10;
int pleh=help(test);
cout<<"\n"<<pleh+2;
return 0;
}