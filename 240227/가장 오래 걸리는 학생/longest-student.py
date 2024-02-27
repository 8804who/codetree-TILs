from collections import deque

q = deque()

n, m = map(int, input().split())

distances = [1e9] * (n+1)
distances[0] = 0
distances[n] = 0
graph = [[] for _ in range(n+1)]

for i in range(m):
    i, j, d = map(int, input().split())
    graph[i].append([j, d])
    graph[j].append([i, d])

q.append([n, 0])

while q:
    n, d = q.popleft()
    for next_node, distance in graph[n]:
        next_distance = d+distance
        if distances[next_node] > next_distance:
            distances[next_node] = next_distance
            q.append([next_node, next_distance])

print(max(distances))