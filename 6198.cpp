#include<bits/stdc++.h>
using namespace std;
stack<int> stk;
#define ll long long

ll ans;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        int k;
        cin >> k;

        while (!stk.empty() && stk.top() < k) {
            ans += stk.size();
            stk.push(k);
        }
        if (stk.top() < k)
            stk.pop();
        
    }
}