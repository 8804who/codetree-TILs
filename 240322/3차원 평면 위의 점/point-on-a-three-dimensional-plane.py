def union(a, b):
    A = find(a)
    B = find(b)
    if A < B:
        parent[B] = A
    else:
        parent[A] = B

def find(a):
    if parent[a] != a:
        parent[a] = find(parent[a])
    return parent[a]

n = int(input())

parent = [i for i in range(n)]
points = [list(map(int, input().split()))+[i] for i in range(n)]
points.sort(key=lambda x:x[0])

edges = []

for i in range(n-1):
    point1 = points[i][3]
    point2 = points[i+1][3]
    dist = points[i+1][0]-points[i][0]
    edges.append([dist, point1, point2])
points.sort(key=lambda x:x[1])
for i in range(n-1):
    point1 = points[i][3]
    point2 = points[i+1][3]
    dist = points[i+1][1]-points[i][1]
    edges.append([dist, point1, point2])
points.sort(key=lambda x:x[2])
for i in range(n-1):
    point1 = points[i][3]
    point2 = points[i+1][3]
    dist = points[i+1][2]-points[i][2]
    edges.append([dist, point1, point2])

edges.sort()
answer = 0
for edge in edges:
    dist, p1, p2 = edge
    if find(p1) != find(p2):
        answer += dist
        union(p1, p2)
print(answer)