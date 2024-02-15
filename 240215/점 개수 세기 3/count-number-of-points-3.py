from sortedcontainers import SortedSet

n, q = map(int, input().split())

arr = list(map(int, input().split()))
nums = SortedSet()

for num in arr:
    nums.add(num)

mapper = dict()
cnt = 1
for num in nums:
    mapper[num] = cnt
    cnt += 1

for _ in range(q):
    s, e = map(int, input().split())
    print(mapper[e]-mapper[s]+1)