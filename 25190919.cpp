
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 

int main() 
{ 
    int c,hcf,t;
    cin>>t;
    while(t--)
    {
    cin>>c;
    int arr[c];
    for(int i=0;i<c;i++)cin>>arr[i];
    int n = sizeof(arr) / sizeof(arr[0]);
    hcf=findGCD(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]/hcf<<" ";
        cout<<endl;
    }
     return 0;
} 