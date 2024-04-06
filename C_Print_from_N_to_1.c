#include <stdio.h>

void recursiveFunc( int i, int n ){
    if (i == n +1) return;
    
    recursiveFunc( i + 1 , n );
    if (i == 1)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d ",i);
    }
  
}

int main(){
    int n;
    scanf("%d",&n);
    recursiveFunc(1, n);
}