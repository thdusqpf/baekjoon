N, X = list(map(int, input().split()))
arr = list(map(int, input().split()))
res = [ele for ele in arr if ele < X ]
print(*res, sep= ' ')