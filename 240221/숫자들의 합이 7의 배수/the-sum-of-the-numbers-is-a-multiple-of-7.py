N = int(input())

nums = [int(input()) for _ in range(N)]
arr1=[0] * N
arr2=[0] * N

arr1[0] = nums[0]%7
for i in range(1, N):
    arr1[i] = (arr1[i-1]+nums[i])%7

dic = {}

arr2[-1] = nums[-1]%7
for i in range(N-2, -1, -1):
    arr2[i] = (arr2[i+1]+nums[i])%7

arr1 = [0]+arr1
arr2 = arr2+[0]

temp = arr2[0]%7

for i in range(len(arr2)):
    dic[arr2[i]]=i

answer = 0
for i in range(len(arr1)):
    temp2 = temp-arr1[i]
    if answer < dic[temp2]-i:
        answer = dic[temp2]-i
print(answer)