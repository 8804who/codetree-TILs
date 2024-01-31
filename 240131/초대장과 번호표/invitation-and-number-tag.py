N, G = map(int, input().split())

groups = []

for _ in range(G):
    members = set(list(map(int, input().split()))[1:])
    groups.append(members)

answer = 0
stack = [1]
while stack:
    invite = set()
    while stack:
        invite.add(stack.pop())
    answer += len(invite)
    for group in groups:
        group -= invite
        if len(group) == 1:
            stack.append(tuple(group)[0])
    
print(answer)