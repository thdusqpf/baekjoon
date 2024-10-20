cnt = 0
def is_palindrome(word):
    global cnt
    cnt += 1
    if len(word) <= 1:
        return 1
    if word[0] != word[-1]:
        return 0
    return is_palindrome(word[1:-1])


n = int(input())
words = [input() for _ in range(n)]

for word in words:
    cnt = 0
    print(is_palindrome(word), cnt)
