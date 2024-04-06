#include<stdio.h>

int main()
{
    int a,firstDigit,secondDigit;
    scanf("%d",&a);
    firstDigit = a / 10;
    secondDigit = a % 10;
    if (firstDigit == 0 || secondDigit == 0)
    {
        printf("YES");
    }
     else if (firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0)
    {
        printf("YES");
    }
    
    else
    {
        printf("NO");
    }

    return 0;
}