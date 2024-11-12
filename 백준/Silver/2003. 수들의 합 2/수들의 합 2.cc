#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int cnt = 0, sum;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            if (sum + arr[j] <= m)
            {
                sum += arr[j];
                if (sum == m) 
                {
                    cnt++;
                    break;
                }
            }
            else break;
        }
    }
    cout << cnt;
    return 0;
}