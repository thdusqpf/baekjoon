#include<bits/stdc++.h>
using namespace std;
stack<int> stk;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, ans = 0;
    cin >> k;
    while(k--) {
        int n;
        cin >> n;
        if (n > 0) stk.push(n);
        else stk.pop();
    }

    while (!stk.empty()) {
        ans += stk.top();
        stk.pop();
    }
    cout << ans;
}