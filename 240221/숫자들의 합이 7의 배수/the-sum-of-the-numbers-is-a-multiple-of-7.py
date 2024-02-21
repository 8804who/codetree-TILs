N = int(input())

nums = [0]+[int(input()) for _ in range(N)]
arr=[1e9] * 7

n = 0
answer = 0
for i in range(1, N+1):
    n += nums[i]
    n %= 7
    answer = max(answer, i-arr[n])
    arr[n] = min(i,arr[n])
print(answer)