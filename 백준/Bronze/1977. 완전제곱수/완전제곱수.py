import math
m = int(input())
n = int(input())

sum = 0
min_val = float("inf")

for i in range(m, n + 1):
    root_num = int(math.sqrt(i))
    if root_num ** 2 == i:
        sum += i
        if min_val > i: min_val = i

if sum > 0 and min_val != 'inf':
    print(sum)
    print(min_val)
else:
    print(-1)