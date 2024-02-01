from sortedcontainers import SortedDict

dic = SortedDict()
n, m = map(int, input().split())
arr = list(map(int, input().split()))
queries = list(map(int, input().split()))

for num in arr:
    dic[num] = 0

for query in queries:
    keys = dic.keys()
    min_idx = dic.bisect_right(query)
    if min_idx>0:
        min_idx -= 1
        print(keys[min_idx])
        dic.pop(keys[min_idx])
    else:
        print(-1)