#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int, string>> v;

    int n;
    cin >> n;
    while (n--) {
        int k;
        string s;
        cin >> k >> s;
        v.push_back({k, s});
    }

    stable_sort(v.begin(), v.end());
   
    for (auto it : v) 
        cout << it.X << " " << it.Y << '\n';
    return 0;
}
