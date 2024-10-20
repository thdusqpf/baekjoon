n, m = list(map(int, input().split()))
arr = list(map(int, input().split()))

max_value = 0
for i in range(len(arr)):
    for j in range(i + 1, len(arr)):
        for k in range(j + 1, len(arr)):
            if arr[i] + arr[j] + arr[k] <= m:
                if max_value < arr[i] + arr[j] + arr[k]:
                    max_value = arr[i] + arr[j] + arr[k]

print(max_value)