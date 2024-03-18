import heapq

n, m = map(int, input().split())

arr = [0] * (n+1)
graph = [[] for _ in range(n+1)]
for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    arr[b] += 1

heap = []

for i in range(1, n+1):
    if arr[i] == 0:
        heapq.heappush(heap,i)
answer = []

while heap:
    num = heapq.heappop(heap)
    n -= 1
    answer.append(num)
    for i in graph[num]:
        arr[i] -= 1
        if arr[i] == 0:
            heapq.heappush(heap,i)
if n == 0:
    print(*answer)
else:
    print(-1)