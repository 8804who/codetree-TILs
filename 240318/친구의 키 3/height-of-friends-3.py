from collections import deque

n, m = map(int, input().split())

arr = [0] * (n+1)
graph = [[] for _ in range(n+1)]
for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    arr[b] += 1

q = deque()

for i in range(1, n+1):
    if arr[i] == 0:
        q.append(i)
answer = []
while q:
    num = q.popleft()
    n -= 1
    answer.append(num)
    for i in graph[num]:
        arr[i] -= 1
        if arr[i] == 0:
            q.append(i)

if n == 0:
    print(*answer)
else:
    print(-1)