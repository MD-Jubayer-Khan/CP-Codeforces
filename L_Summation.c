#include <stdio.h>

long long int recursiveFunc( int a[],int n,  int i ){
    if (i == n) return 0;

    long long int sum = recursiveFunc(a,n, i+1 ) + a[i];
    return sum;    
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    long long int sum = recursiveFunc(a,n,0);
    printf("%lld",sum);
}