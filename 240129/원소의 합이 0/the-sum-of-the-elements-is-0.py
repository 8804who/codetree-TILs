n = int(input())

A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))
D = list(map(int, input().split()))

AB = {}
CD = {}
for i in range(n):
    for j in range(n):
        if A[i]+B[j] not in AB:
            AB[A[i]+B[j]] = 1
        else:
            AB[A[i]+B[j]] += 1
        if C[i]+D[j] not in CD:
            CD[C[i]+D[j]] = 1
        else:
            CD[C[i]+D[j]] += 1

answer = 0

for num in AB.keys():
    if -num in CD:
        answer += AB[num]*CD[-num]

print(answer)