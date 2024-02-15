import bisect
n, q = map(int, input().split())

arr = sorted(list(map(int, input().split())))

for _ in range(q):
    s, e = map(int, input().split())
    left = bisect.bisect_left(arr, s)
    right = bisect.bisect_right(arr, e)
    print(right-left)