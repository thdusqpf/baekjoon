#include <bits/stdc++.h>
using namespace std;

int cnt[26], n;
string name, ans;

int main()
{
    cin >> n;
    for (int i = 0; i< n; i++)
    {
        cin >> name;
        cnt[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] >= 5)
            ans += char(i + 'a');
    }
    if (ans == "") cout << "PREDAJA";
    else cout << ans;

    return 0;
}