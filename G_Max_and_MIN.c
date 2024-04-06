#include <stdio.h>
#include <limits.h>
 
void minMax(int n, int *ar) {
    int mn = INT_MAX, mx = INT_MIN;
 
    for (int i = 0; i < n; i++) {
        if (ar[i] < mn) {
            mn = ar[i];
        } 
        if (ar[i] > mx) {
            mx = ar[i];
        }     
    }
 
    printf("%d %d\n", mn, mx);
}

int main() {
    int n;
    scanf("%d", &n);
        
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
 
    minMax(n, ar);
 
    return 0;
}