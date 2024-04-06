#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000001];
    scanf("%s",ar);
    int sum = 0;
    for (int i = 0; i < strlen(ar); i++)
    {
        sum+=ar[i] - '0';
    }
    printf("%d",sum); 
    return 0;
}