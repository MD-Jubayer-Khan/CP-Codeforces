#include <stdio.h>
#include <string.h>

int main() {
    char str[1001], strTwo[1001];
    scanf("%s",str);
    strcpy(strTwo,str);
    int i=0,j=strlen(str)-1;
    while (i<j)
    {
        char temp = strTwo[i];
        strTwo[i] = strTwo[j];
        strTwo[j] = temp;
        i++;
        j--;
    }
    if (strcmp(str,strTwo) == 0)
    {
       printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}