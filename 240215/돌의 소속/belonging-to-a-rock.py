import sys 
input = sys.stdin.readline

N, Q = map(int, input().split())

group_counts = [[],[0],[0],[0]]

for i in range(N):
    num = int(input())
    for j in range(1,4):
        group_counts[j].append(group_counts[j][-1])
    group_counts[num][-1] += 1

for i in range(Q):
    s, e = map(int, input().split())
    for j in range(1,4):
        print(group_counts[j][e]-group_counts[j][s-1], end=' ')
    print()