#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        stack<char> stk; 
           
        for(char c:s){
            if(c == '1'){
                if(!stk.empty() && stk.top() == '1') stk.pop();
                else stk.push(c);
            }
            else stk.push(c);
        }
        int cnt = 0;
        int tempCnt = 0;
        
        while (!stk.empty()) {
            if (stk.top() != '1') {
                tempCnt++;
                cnt = max(cnt, tempCnt);
            } else {
                tempCnt = 0;
            }
            stk.pop();
        }
        cout << cnt << endl;        
    }
    
    return 0;
}