#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
        vector<char> one;
        vector<char> two;

        for(char c:s){
            if(c == '+') one.push_back(c);
            else two.push_back(c);
        }
        int sOne = one.size();
        int sTwo = two.size();
        int result = abs(sOne - sTwo);
        cout << result << endl;
    }
    return 0;
}
