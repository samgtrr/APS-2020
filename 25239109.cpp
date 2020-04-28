#include <iostream>
#include <stack>
#include<iostream>
#include<string.h>
using namespace std;
#include <queue>
int main()
{
   queue <char> st;
   int t,c,b,pr;
   string p;
   cin>>t;
   while(t--)
   {
    cin>>p;
    c=pr=b=0;
    for(int i=0;i<p.length();i++){
     st.push(p[i]);}
       while(!st.empty())
       {
           
            if(st.front()=='#'){
               c=0;
               st.pop();}
            else{
                c++;
                st.pop();
                if(c>b&&st.front()=='#')pr++;
                if(c>b)b=c;}
        }
   cout<<pr<<endl;
  } return 0;
}