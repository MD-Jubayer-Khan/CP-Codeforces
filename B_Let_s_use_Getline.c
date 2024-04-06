#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100001];
    fgets(ar,100001,stdin);
    for (int i = 0; ar[i] != '\\'; i++)
    {
        printf("%c",ar[i]);
    }

    return 0;
}