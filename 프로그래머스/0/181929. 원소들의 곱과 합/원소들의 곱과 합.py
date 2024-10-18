def solution(num_list):
    answer = 0
    mul = 1
    sum = 0
    for num in num_list:
        mul *= num
        sum += num
    
    if mul < sum**2:
        answer = 1
    else:
        answer = 0
    return answer