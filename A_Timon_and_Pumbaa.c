#include<stdio.h>

int main()
{
    int a,b,n;
    scanf("%d %d",&a,&b);
    n = a - b;
    if (n >= 0)
    {
        printf("%d",n);
    }
    else
    {
        printf("0");
    }   
    
    return 0;
}