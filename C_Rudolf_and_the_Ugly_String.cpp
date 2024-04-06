#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();
    
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);

        int removedCharacters = 0;
        for (int i = 0; i < n - 2; i++){
            if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e'){
                removedCharacters++;
                i += 2;
            } else if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p'){
                removedCharacters++;
                i += 2;
            }
        }
        cout << removedCharacters << '\n';
    }
    return 0;
}
