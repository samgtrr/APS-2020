#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    long long int output[T]={0}, cnt, N, i;
    for(int t=0;t<T;t++){
        cin>>N;
        cnt = 0;
        for(i=5;N/i>=1;i*=5){
            cnt += N/i;
        }
        output[t] = cnt;

    } for(int t=0;t<T;t++){
        cout<<output[t]<<endl;
    }




}