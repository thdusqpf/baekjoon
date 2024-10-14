arr_2D = [ list(map(int, input().split())) for _ in range(9)]

max = float("-inf")
row, col = 0, 0

for r in range(len(arr_2D)):
    for c in range(len(arr_2D[r])):
        if max < arr_2D[r][c]:
            max = arr_2D[r][c]
            row = r
            col = c

print(max, row + 1, col + 1)