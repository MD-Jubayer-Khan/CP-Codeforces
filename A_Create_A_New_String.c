#include <stdio.h>
#include <string.h>
int main()
{
    char arOne[1001];
    scanf("%s",arOne);

    char arTwo[1001];
    scanf("%s",arTwo);

    int strOne = strlen(arOne);
    int strTwo = strlen(arTwo);
    printf("%d %d\n%s %s",strOne,strTwo,arOne,arTwo);

    return 0;
}