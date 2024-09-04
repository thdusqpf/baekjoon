#include<bits/stdc++.h>
using namespace std;
deque<int> dq;

int get_index(int x) {
    for (int i = 0; i < dq.size(); i++)
        if (dq[i] == x) return i;
    return -1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) dq.push_back(i);
    
    while (m--) {
        int k;
        cin >> k; 
        
        int idx = get_index(k);
        
        if (dq.front() == k) dq.pop_front();
        else {
            int c = dq.size() / 2;
        
            if (idx <= c) {
                while (dq.front() != k) {
                 int tmp = dq.front();
                dq.pop_front();
                dq.push_back(tmp);
                cnt++;
                }
            }
            else {  // idx > c
                while (dq.front() != k) {
                    int tmp = dq.back();
                    dq.pop_back();
                    dq.push_front(tmp);
                    cnt++;
                    }
                }
        
            dq.pop_front();
        }
        
    }
    cout << cnt;
    return 0;
}