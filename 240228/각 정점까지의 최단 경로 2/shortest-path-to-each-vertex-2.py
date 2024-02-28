n, m = map(int, input().split())

distances = [[-1 for _ in range(n+1)] for _ in range(n+1)]

for i in range(1, n+1):
    distances[i][i] = 0

graph = [[] for _ in range(n+1)]

for _ in range(m):
    s, e, d = map(int, input().split())
    if distances[s][e] == -1 or distances[s][e] > d:
        distances[s][e] = d

for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            if distances[i][k] == -1 or distances[k][j] == -1:
                continue
            if distances[i][j] == -1 or distances[i][j] > distances[i][k]+distances[k][j]:
                distances[i][j] = distances[i][k]+distances[k][j]

for i in range(1, n+1):
    print(*distances[i][1:],sep=' ')