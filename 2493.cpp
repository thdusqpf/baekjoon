#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
stack<pair<int,int>> tower;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    tower.push({1000001, 0});

    for (int i = 1; i <= n; i++) {
        int h;
        cin >> h;

        while (tower.top().X < h)
            tower.pop();
        cout << tower.top().Y << " ";
        tower.push({h, i});
    }   
}
// 쓸모 없는 애를 빼버린다고 생각하기
// while 대신 if 문을 사용하면 segmentation fault 발생


