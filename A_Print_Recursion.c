#include <stdio.h>

void recursiveFunc( int i ){
    if (i == 0) return;
    
    printf("I love Recursion\n");
    recursiveFunc( i - 1 );
}

int main(){
    int n;
    scanf("%d",&n);
    recursiveFunc(n);
}