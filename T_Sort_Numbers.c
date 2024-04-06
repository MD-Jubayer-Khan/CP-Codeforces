#include <stdio.h>

int main() {
    int ar[3]; // n = 3
    int a,b,c;    
    for (int i = 0; i < 3; i++)
    {
          scanf("%d",&ar[i]);
          
    }

    a=ar[0];
    b=ar[1];
    c=ar[2];

    for (int i = 0; i < 2 ; i++) // i < n-1
    {
       for (int j = i+1; j < 3; j++)
       {
        if (ar[i] > ar[j])
        {
          int temp = ar[i];
          ar[i] = ar[j];
          ar[j] = temp;
        }   
       }      
    }
    for (int i = 0; i < 3; i++)
    {
       printf("%d\n",ar[i]);
    }
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
