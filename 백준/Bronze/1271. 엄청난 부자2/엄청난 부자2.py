money, people = list(map(int, input().split()))
money_per_person = money // people
rest = money % people
print(money_per_person)
print(rest)