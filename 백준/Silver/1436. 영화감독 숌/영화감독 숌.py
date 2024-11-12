ans = []

num = 666
cnt = 0

while True:
    if cnt  == 10000:
        break
    if '666' in str(num):
        ans.append(num)
        cnt += 1
    num += 1

n = int(input())
print(ans[n - 1])