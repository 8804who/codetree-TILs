n, q = map(int, input().split())
arr = list(map(int, input().split()))

left = [0] * (n+1)
right = [0] * (n+2)
left[1] = arr[0]
right[-2] = arr[-1]

for i in range(2, n+1):
    left[i] = max(left[i-1], arr[i-1])

for i in range(n-1,0,-1):
    right[i] = max(right[i+1], arr[i-1])

for _ in range(q):
    s, e = map(int, input().split())
    print(max(left[s-1], right[e+1]))