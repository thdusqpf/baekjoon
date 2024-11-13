#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int tc, k, n;
     cin >> tc;
     for(int i =0; i < tc; i++)
    {
        cin >> k >> n;
        int dp[k+1][n+1] = {0};

        for (int i = 1; i < n+1; i++)
            dp[0][i] = i;

        for (int i = 1; i < k+1; i++) {
            for (int j = 1; j < n+1; j++)
            {
                dp[i][j] = dp[i][j-1]+ dp[i-1][j];
            }
        }
        cout << dp[k][n] << '\n';
    }
    return 0;
}