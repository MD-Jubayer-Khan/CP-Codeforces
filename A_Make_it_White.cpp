#include <bits/stdc++.h>

using namespace std;

int minSegmentLength(string s) {
    int n = s.length();
    int left = 0, right = n - 1;

    while (left < n && s[left] == 'W')
        left++;

    while (right >= 0 && s[right] == 'W')
        right--;

    if (left > right)
        return 0;

    return max(right - left + 1, 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << minSegmentLength(s) << endl;
    }

    return 0;
}
