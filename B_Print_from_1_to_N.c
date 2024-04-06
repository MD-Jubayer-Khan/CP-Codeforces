#include <stdio.h>

void recursiveFunc( int i, int n ){
    if (i == n +1) return;
    
    printf("%d\n",i);
    recursiveFunc( i + 1 , n );
}

int main(){
    int n;
    scanf("%d",&n);
    recursiveFunc(1, n);
}