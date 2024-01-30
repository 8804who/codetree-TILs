from sortedcontainers import SortedDict

n = int(input())

dic = SortedDict()

for _ in range(n):
    string = input()
    if string not in dic:
        dic[string] = 1
    else:
        dic[string] += 1

for key, value in dic.items():
    num = str(round((value/n)*100, 4))
    if len(num.split('.')[1])<4:
        num+='0'*(4-len(num.split('.')[1]))
    print(key, num)