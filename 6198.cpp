#include<bits/stdc++.h>
using namespace std;
#define ll long long

int N;
stack<int> tower;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll cnt = 0;
    cin >> N;

    while (N--) {
        int height;
        cin >> height;
        while (!tower.empty() && tower.top() <= height)
            tower.pop();
        cnt += tower.size();
        tower.push(height);
    }
    cout << cnt;

}

// 왜 ll을 사용해야 하는지 생각하기