#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;

        int transitions_01 = 0, transitions_10 = 0, operations = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] != f[i]) {
                if (s[i] == '0') {
                    transitions_01++;
                } else {
                    transitions_10++;
                }
            }
        }
        operations = max(transitions_01, transitions_10);

        cout << operations << endl;
    }

    return 0;
}
