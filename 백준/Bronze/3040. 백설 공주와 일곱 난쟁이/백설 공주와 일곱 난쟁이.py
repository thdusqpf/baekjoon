from itertools import combinations

inputs = [ int(input()) for _ in range(9)]

result = list(combinations(inputs, 7))
for tp in result:
    if sum(tp) == 100:
        print(*tp, sep = '\n')
        break