import re

data = list()
ans = 0

N = int(input())

for i in range(0, N):
    data.append(str(input()))
#  print(data[i])
    ans += int(re.search(r"hackerrank{10}", data[i])) 

print(ans)
