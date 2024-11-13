def rest_money(n):
    dp = [-1] * (n+1)
    dp[0] = 0

    for i in range(1, n+1):
        if i == 2:
            dp[i] = 1
        elif i == 5:
            dp[i] = 1
        elif i > 5 and i -5 != 1 and i - 5 != 3:
            dp[i] = dp[5] + dp[i-5]
        elif i > 3:
            dp[i] = dp[2] + dp[i-2]

    return dp[n]

n = int(input())
print(rest_money(n))