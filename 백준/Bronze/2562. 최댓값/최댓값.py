arr = [ int(input()) for _ in range(9) ]
max = float("-inf")
idx = -1
for i in range(9):
    if max < arr[i]:
        max = arr[i]
        idx = i

print(max, idx + 1, sep='\n')