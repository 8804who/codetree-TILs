c = input()
arr1=[0] * len(c)
arr2=[0] * len(c)
for i in range(len(c)-2,-1,-1):
    arr1[i] = arr1[i+1]
    if c[i] == ')' and c[i+1] == ')':
        arr1[i] += 1

for i in range(1,len(c)):
    if c[i] == '(' and c[i-1] == '(':
        arr2[i] += 1

answer = 0
for i in range(len(c)):
    answer += arr1[i] * arr2[i]
print(answer)