from sortedcontainers import SortedDict

dic = SortedDict()

n = int(input())

for _ in range(n):
    cmd = list(input().split())

    if cmd[0] == 'add':
        dic[int(cmd[1])] = cmd[2]
    elif cmd[0] == 'find':
        if int(cmd[1]) in dic:
            print(dic[int(cmd[1])])
        else:
            print('None')
    elif cmd[0] == 'remove':
        if int(cmd[1]) in dic:
            dic.pop(int(cmd[1]))
    else:
        if len(dic)>0:
            for _, value in dic.items():
                print(value, end=' ')
            print()
        else:
            print('None')