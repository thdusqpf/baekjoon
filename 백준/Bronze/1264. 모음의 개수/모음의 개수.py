while True:
    count = 0
    sentence = input()
    if sentence == '#':
        break
    sentence = sentence.lower()
    for i in range(len(sentence)):
        if sentence[i] == 'a' or sentence[i] == 'e' or sentence[i] == 'i' or sentence[i] == 'o' or sentence[i] == 'u':
            count += 1
    print(count)