n = input()
for i in range(0, int(n)):
    name = input()
    score1 = int(input())
    score2 = int(input())
    score3 = int(input())
    average = (score1 + score2 + score3) / 3
    dic = {'name':name, 'average':average}
    print(name) 
