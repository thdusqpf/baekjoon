def solution(a, b):
    answer = 0
    n_1 = int(str(a) + str(b))
    n_2 = 2 * a * b
    if n_1 >= n_2: 
        answer = n_1
    else :
        answer = n_2
    return answer