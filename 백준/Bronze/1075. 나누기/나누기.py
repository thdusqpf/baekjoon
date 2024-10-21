n, m = int(input()), int(input())

start = n - n % 100
end = start + 99

for i in range(start, end + 1):
    if i % m == 0:
        print(str(i)[-2:])
        break
