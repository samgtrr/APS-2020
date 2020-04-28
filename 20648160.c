#include <stdio.h>
void main()
{
     long long int t;
    scanf("%lld",&t);
    while(t--)
    {
    char s[1001];
    long long int i, sum = 0;
     scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= '0') && (s[i] <= '9'))
        {
            sum += (s[i] - '0');
        }
    }

    printf("%lld\n", sum);
    }
}
