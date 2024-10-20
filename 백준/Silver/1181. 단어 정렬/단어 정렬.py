import sys
my_input = sys.stdin.readline
N = int(my_input())
words = sorted([[len(ele), ele] for ele in set([my_input().strip() for _ in range(N)])])
word = [item[1] for item in words]
print(*word, sep='\n')
