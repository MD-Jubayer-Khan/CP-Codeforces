#include <stdio.h>

int countVowels (char s[], int i) {

    if (s[i] == '\0')
    {
       return 0;
    }
    
    int count = countVowels(s,i+1);
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i]+= 32;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main () {
    char s[201];
    fgets(s,201,stdin);
    int count = countVowels(s,0);
    printf("%d",count);
    return 0;
}