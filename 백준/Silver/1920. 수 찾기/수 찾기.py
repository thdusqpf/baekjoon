n = int(input())
arr_n = list(map(int, input().split()))
m = int(input())
arr_m = list(map(int, input().split()))

set_arr_n = set(arr_n)
for target in arr_m:
    if target in set_arr_n:
        print(1)
    else: print(0)