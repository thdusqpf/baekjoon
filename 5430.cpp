#include<bits/stdc++.h>
using namespace std;
deque<int> dq_src;
deque<int> dq_des;

void parse(string& tmp, deque<int>& v) {
    int cur = 0;
    for (int i = 1; i + 1 < tmp.size(); i++)
    {
        if (tmp[i] == ','){
            v.push_back(cur);
            cur = 0;
        }
        else {
            cur = 10 * cur + (tmp[i] + '0');
        }
    }
    if (cur != 0)
        v.push_back(cur);
}



int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string f, arr;
        cin >> f >> n >> arr;
        
        for (char c : f) {
            if (c == 'R') {
                while(dq_src.size()) {
                    dq_des.push_back(dq_src.back());
                    dq_src.pop_back();
                }
            }

            else if (c == 'D') {
                if (dq_src.empty()) cout << "error" << '\n';
                else dq_src.pop_front();
            }
        }
    }    
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) dq_src.push_back(i);

    while (dq_des.size()) {
        cout << dq_des.front() << " ";
        dq_des.pop_front();
    }  
    return 0;    
}
