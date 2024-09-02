#include<bits/stdc++.h>
using namespace std;
stack<int> stk;
#define X first
#define Y second

int N;
stack<pair<int,int>> tower;
stack<int> s;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    while(N--) {
        int k;
        cin >> k;
        s.push(k);
    }

    for (int i = 1; i <= N; i++) {
        int h;
        h = s.top();
        s.pop();
        if (h > s.top())
            tower.push({s.top(), h});
        else 

        else cout << -1;
    }


}