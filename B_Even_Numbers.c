#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if( n != 1){
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }       
        }
        
    }
    else
    {
        printf("-1\n");
    }
    
    return 0;
}