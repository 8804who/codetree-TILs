m = int(input())
a, b = map(int, input().split())
min_answer = m
max_answer = 0
for i in range(a,b+1):
    s = 1
    e = m
    count = 0

    while s<=e:
        mid = (s+e)//2
        count += 1
        if mid == i:
            break
        elif mid > i:
            e = mid-1
        else:
            s = mid+1
    
    if min_answer>count:
        min_answer = count
    if max_answer<count:
        max_answer = count

print(min_answer, max_answer)