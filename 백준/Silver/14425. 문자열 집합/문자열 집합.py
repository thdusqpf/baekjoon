import sys
my_input = sys.stdin.readline

n, m  = list(map(int, my_input().strip().split()))
cnt = 0
words = [my_input().strip() for _ in range(n)]
check = [my_input().strip() for _ in range(m)]

words = set(words)

for c_word in check:
    if c_word in words:
        cnt += 1

print(cnt)