# include <bits/stdc++.h>
using namespace std;

bool is_Prime(int n){
    if (n == 1) return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}
int main(void)
{
    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (is_Prime(num)) cnt++;
    }
    cout << cnt;
    return 0;
}
