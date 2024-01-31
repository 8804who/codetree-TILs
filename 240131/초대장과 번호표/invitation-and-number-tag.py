N, G = map(int, input().split())

groups = []

for _ in range(G):
    members = set(list(map(int, input().split()))[1:])
    groups.append(members)

answer = 0
invite_now = set([1])
while invite_now:
    invite_next = set()
    answer += len(invite_now)
    for group in groups:
        group -= invite_now
        if len(group) == 1:
            invite_next.update(group)
    invite_now = invite_next
    
print(answer)