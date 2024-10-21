n = int(input())
for _ in range(n):
    answer = ""
    repeat, word = input().split()
    repeat = int(repeat)
    for i in range(len(word)):
        answer += word[i] * repeat
    print(answer)

