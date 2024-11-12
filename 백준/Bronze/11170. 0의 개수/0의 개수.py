n = int(input())

for _ in range(n):
    a, b = list(map(int, input().split()))
    cnt = 0
    for i in range(a, b + 1):
        str_i = str(i)
        for char in str_i:
            if char == '0': cnt += 1
    print(cnt)
