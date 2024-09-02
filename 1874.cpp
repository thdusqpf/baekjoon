#include<bits/stdc++.h>
using namespace std;
stack<int> stk;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, i = 1;
    cin >> n;
    string ans;

    while(n--) {
        int t;
        cin >> t;

        while (i <= t) { // while (stk.empty() || stk.top() < t)
            stk.push(i++);
            ans += "+\n";
        }
        

        if (stk.top() != t) {
            cout << "NO";
            return 0;
        }
        stk.pop();
        ans += "-\n";
    }
    cout << ans;
   
    
}