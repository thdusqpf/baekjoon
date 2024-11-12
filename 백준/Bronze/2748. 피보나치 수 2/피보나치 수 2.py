

dp = {}
def fibo(n):
    if n in dp:
        return dp[n]
    if n <= 1:
        return n

    cur = fibo(n-1) + fibo(n-2)
    dp[n] = cur
    return cur

n = int(input())
print(fibo(n))

