#include<bits/stdc++.h>
using namespace std;

int main(){

int t,n;
cin>>t;

//char s[1000];
int a[6]={0};
int v=0,w=1,x=2,y=3,z=4;
cin.get();
int found=0;

while(t){
    cin>>n;
    int a[6]={0};
     found=0;

    for(int i=0;i<n;i++){
        char s[1000];
        
        cin>>s;
        if(strcmp("cakewalk",s)==0){
            a[v]++;
        }
        else if(strcmp("simple",s)==0){
            a[w]++;
        }
        else if(strcmp("easy",s)==0){
            a[x]++;
        }
        else if(strcmp("easy-medium",s)==0 || strcmp("medium",s)==0){
            a[y]++;
        }
        else{
            a[z]++;
        }
    }
    
  //  cout<<a[w]<<endl;
    
    for(int j=v;j<=z;j++){
       // cout<<a[j]<<" ";
        if(a[j]==0)
            found=1;
    }
    
    //cout<<found<<endl;
    if(found==1){
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;

    t--;

}






    return 0;
}