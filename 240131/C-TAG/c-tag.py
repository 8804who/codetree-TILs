from itertools import combinations
N, M = map(int, input().split())

A = []
B = []

for _ in range(N):
    A.append(input())

for _ in range(N):
    B.append(input())

answer = 0

for p in combinations([i for i in range(M)], 3):
    key_A = set()
    key_B = set()
    for i in range(N):
        key_A.add(A[i][p[0]]+A[i][p[1]]+A[i][p[2]])
        key_B.add(B[i][p[0]]+B[i][p[1]]+B[i][p[2]])
    if len(key_A & key_B) == 0:
        answer += 1
print(answer)