import sys
input = sys.stdin.readline

n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]

for i in range(1, n):
    for j in range(n):
        arr[i][j] += arr[i-1][j]

for i in range(n):
    for j in range(1, n):
        arr[i][j] += arr[i][j-1]

for i in range(n):
    for j in range(n):
        for r in range(i+1):
            for c in range(j+1):
                a = 0
                a += 1