n, m  = list(map(int, input().split()))
cnt = 0
words = [input() for _ in range(n)]
check = [input() for _ in range(m)]

words = set(words)

for c_word in check:
    if c_word in words:
        cnt += 1

print(cnt)