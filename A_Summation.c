#include <stdio.h>
int main()
{
    long long int n,sum = 0;
    scanf("%lld",&n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
         sum += ar[i];
    }

    if (sum < 0)
    {
        printf("%lld\n",sum*-1);
    }
    else
    {
        printf("%lld\n",sum);        
    }

    return 0;
}