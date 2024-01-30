from sortedcontainers import SortedDict

dic = SortedDict()

n = int(input())
arr = list(map(int, input().split()))

for i, num in enumerate(arr):
    if num not in dic:
        dic[num] = i+1

for key, value in dic.items():
    print(key, value)