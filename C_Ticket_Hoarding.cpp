#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int64_t ans = 0;
        int tax = 0;
        for (int i = 0; i < n; ++i) {
            int buy = min(m, k);
            ans += 1LL * buy * (a[i] + tax);
            tax += buy;
            k -= buy;
        }
        cout << ans << endl;
    }
}