#include<bits/stdc++.h>
using namespace std;
queue<int> q;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s == "push") {
            int k;
            cin >> k;
            q.push(k);
        }
        else if (s == "front") {
            if (q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else if (s == "back") {
            if (q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
        else if (s == "size") cout << q.size() << '\n';
        else if (s =="empty") cout << q.empty() << '\n';
        else if (s == "pop") {
            if (q.empty()) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
    }
    return 0;
}