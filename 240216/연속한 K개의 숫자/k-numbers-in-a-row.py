N, K, B = map(int, input().split())
arr = [0 for i in range(N+1)]

for _ in range(B):
    arr[int(input())] = 1

start, end = 1, 1
count = arr[1]
streak = 1
answer = N
while start<=end:
    if streak<K:
        end += 1
        if end > N:
            break
        streak += 1
        count += arr[end]
    else:
        streak -= 1
        count -= arr[start]
        start += 1
    if streak>=K and answer > count:
        answer = count
print(answer)