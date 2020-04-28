#include <stdio.h>
#define int long long int

int main() {
    int n,t,a[100005];
    scanf("%lld",&t);
    while(t--){
        // cin>>n;
        scanf("%lld",&n);
        if(n==1){
            printf("1\n");
            printf("1 1\n");
        }
        else{
            printf("%lld\n",n/2);
            if(n<=3){
                printf("%lld ",n);
                for(int i=1;i<n+1;i++)printf("%lld ",i);
                printf("\n");
            }
            else{
                printf("3 1 2 3\n");
                if(n%2==1){
                  for(int i=4;i<=n;i=i+2)printf("2 %lld %lld\n",i,i+1);
                //   printf("1 %lld\n",n);
                }
                else{
                    for(int i=4;i<=n-1;i=i+2)printf("2 %lld %lld\n",i,i+1);
                  printf("1 %lld\n",n);
                }
            }
        }
    }
	//code
	return 0;
}