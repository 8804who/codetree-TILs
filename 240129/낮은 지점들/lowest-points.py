n = int(input())
dic = {}

for _ in range(n):
    x, y = map(int, input().split())
    if x not in dic:
        dic[x] = y
    else:
        dic[x] = min(dic[x], y)
print(sum(dic.values()))