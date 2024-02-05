import heapq

N = int(input())
arr = list(map(int, input().split()))
heap = []
for num in arr:
    heapq.heappush(heap, -num)
    if len(heap)<3:
        print(-1)
    else:
        if len(heap)>3:
            heapq.heappop(heap)
        print(heap[0]*heap[1]*heap[2]*-1)