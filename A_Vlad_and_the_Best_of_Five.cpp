#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int countA = 0, countB = 0;
        for(char c:s){
            if(c == 'A') countA++;
            else if( c == 'B') countB++;
        }

        if(countA > countB) cout << "A" << endl;
        else if(countA < countB) cout << "B" << endl;
    }

    return 0;
}