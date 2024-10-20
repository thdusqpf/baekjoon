import sys
cnt = 0
def is_palindrome(word):
    global cnt
    cnt += 1
    if len(word) <= 1:
        return 1
    if word[0] != word[-1]:
        return 0
    return is_palindrome(word[1:-1])

my_input = sys.stdin.readline
n = int(my_input())
words = [my_input().strip() for _ in range(n)]

for word in words:
    cnt = 0
    print(is_palindrome(word), cnt)
