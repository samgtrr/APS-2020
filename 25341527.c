#include <stdio.h>

int main(void) {
	int T,i,j,k,n,A[500],temp;
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
	    scanf("%d",&n);
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&A[j]);
	    }
	    for(j=0;j<n-1;j++)
	    {
	        for(k=0;k<n-1-j;k++)
	        {
	            if(j%2==0)
	            {
	                if(A[k]>A[k+1])
	                {
	                    temp=A[k];
	                    A[k]=A[k+1];
	                    A[k+1]=temp;
	                }
	            }
	            else
	            {
	                if(A[k]<A[k+1])
	                {
	                    temp=A[k];
	                    A[k]=A[k+1];
	                    A[k+1]=temp;
	                }
	            }
	        }
	    }
	    for(j=n-1;j>=0;j--)
	    {
	        printf("%d ",A[j]);
	    }
	    printf("\n");
	}
	return 0;
}
