#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    
    int mn = INT_MAX;
 
    for (int i = 0; i < n; i++) {
        if (ar[i] < mn) {
            mn = ar[i];
        }     
    }

    int count=0;
    for (int i = 0; i < n; i++)
    {
       if (ar[i] == mn)
       {
        count++;
       }
    }
    if (count % 2 != 0)
    {
       printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }
    
    return 0;
}