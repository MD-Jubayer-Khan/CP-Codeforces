#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        
        string tm;
        cin >> tm;

        int hour = stoi(tm.substr(0, 2));
        int minute = stoi(tm.substr(3, 2));

        if (hour == 0){
            cout << "12";
        } else if (hour > 12) {
            cout << setw(2) << setfill('0') << hour - 12;
        } 
        else {
            cout << setw(2) << setfill('0') << hour;
        }

        cout << ":" << setw(2) << setfill('0') << minute;

        if (hour >= 12) {
            cout << " PM";
        } 
        else {
            cout << " AM";
        }

        cout << endl;
    }

    return 0;
}