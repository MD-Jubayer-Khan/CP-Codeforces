#include <bits/stdc++.h>

using namespace std;

int sum(int num){
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long int totalSum = 0;
        for (int i = 1; i <= n; ++i){
            totalSum += sum(i);
        }
        cout << totalSum << endl;
    }
    return 0;
}
