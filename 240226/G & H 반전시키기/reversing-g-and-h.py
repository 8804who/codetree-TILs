n = int(input())
s1 = input()
s2 = input()

arr = []

for i in range(n):
    if s1[i]!=s2[i]:
        arr.append(1)
    else:
        arr.append(0)

count = 0
answer = 0
for i in range(n):
    if arr[i] == 1:
        count += 1
    else:
        if count > 0:
            answer += 1
            count = 0
if count > 0:
    answer += 1
print(answer)