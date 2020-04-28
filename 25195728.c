#include<stdio.h>
int main()
{
        int n;
       double a,b,c;
        scanf("%d",&n);
        while(n>0)
        {
                c=0;
                scanf("%lf%lf",&a,&b);
                if(a>1000)
                c=a*.9*b;
                else
                c=a*b;
                printf("%lf\n",c);
        n--;
            }
return 0;
}
        