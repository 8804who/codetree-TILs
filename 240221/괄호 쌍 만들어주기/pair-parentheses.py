c = input()

answer = 0
arr=[0] * len(c)

for i in range(len(c)-2,-1,-1):
    arr[i] = arr[i+1]
    if c[i] == ')' and c[i+1] == ')':
        arr[i] += 1

for i in range(1,len(c)):
    if c[i] == '(' and c[i-1] == '(':
        answer += arr[i]
print(answer)