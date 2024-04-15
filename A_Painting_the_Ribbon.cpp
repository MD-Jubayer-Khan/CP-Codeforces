#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        int maxColor = (n + m -1) /m;
        if(maxColor + k >= n) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}