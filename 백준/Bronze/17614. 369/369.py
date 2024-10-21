import sys
my_input = sys.stdin.readline

n = int(my_input())
count = 0

for i in range(1, n + 1):
    word = str(i)
    for j in range(len(word)):
        if '3' in word[j] or '6' in word[j] or '9' in word[j]:
            count += 1
print(count)