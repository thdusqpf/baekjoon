from bisect import *

# 이 과정을 qeuries의 배열이 끝날 때까지 반복
n = int(input())

arr = list(map(int, input().split()))

m = int(input())
queries = list(map(int, input().split()))

# 정렬 시키기
arr.sort()

# bisect로 index를 찾는다
# input: arr, query
# output: index

for query in queries:
  i = bisect_left(arr, query)
# index를 비교한다
# input: index, arr[index], target
# output : 존재하면 1, 존재하지 않으면 0

  if i != len(arr) and arr[i] == query:
    print(1)
  else:
    print(0) 