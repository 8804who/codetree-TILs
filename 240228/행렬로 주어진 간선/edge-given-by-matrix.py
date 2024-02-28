n = int(input())

arr = [list(map(int, input().split())) for _ in range(n)]

for i in range(n):
    arr[i][i] = 1

for k in range(n):
    for i in range(n):
        for j in range(n):
            if arr[i][k] == 1 and arr[k][j] == 1:
                arr[i][j] = 1

for i in range(n):
    print(*arr[i])