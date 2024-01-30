from sortedcontainers import SortedDict

dic = SortedDict()
n = int(input())

for _ in range(n):
    string = input()
    if string not in dic:
        dic[string] = 1
    else:
        dic[string] += 1

for key, value in dic.items():
    print(key, value)