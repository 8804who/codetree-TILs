s = int(input())

start = 0
end = 10e18

answer = -1

while start<=end:
    mid = (start+end)//2
    total = (mid*(mid+1))//2
    if total <= s:
        if answer < mid:
            answer = mid
        start = mid+1
    else:
        end = mid-1
print(int(answer))