N, T = map(int, input().split())

arr = []

for _ in range(N):
    start, speed = map(int, input().split())
    end = speed*T+start
    arr.append((start, end))
arr.sort()

temp = arr.pop()[1]
answer = 1
while arr:
    _, end = arr.pop()
    if temp > end:
        answer += 1
        temp = end
print(answer)