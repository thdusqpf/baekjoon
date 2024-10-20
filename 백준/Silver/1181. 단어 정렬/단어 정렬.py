N = int(input())
words = sorted([[len(ele), ele] for ele in set([input() for _ in range(N)])])
word = [item[1] for item in words]
print(*word, sep='\n')
