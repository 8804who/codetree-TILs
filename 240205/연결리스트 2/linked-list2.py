class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None
    
    def insert_prev(u, singleton):
        singleton.prev = u.prev
        singleton.next = u

        if singleton.prev is not None:
            singleton.prev.next = singleton
        if singleton.next is not None:
            singleton.next.prev = singleton
        
    def insert_next(u, singleton):
        singleton.prev = u
        singleton.next = u.next

        if singleton.prev is not None:
            singleton.prev.next = singleton
        if singleton.next is not None:
            singleton.next.prev = singleton
            
    def pop(u):
        if u.prev is not None:
            u.prev.next = u.next
        if u.next is not None:
            u.next.prev = u.prev
        u.prev = u.next = None
    


N = int(input())
Q = int(input())

nodes = dict()
for i in range(1, N+1):
    nodes[i] = Node(i)

for i in range(Q):
    cmd = list(map(int, input().split()))
    if cmd[0] == 1:
        nodes[cmd[1]].pop()
    elif cmd[0] == 2:
        Node.insert_prev(nodes[cmd[1]], nodes[cmd[2]])
    elif cmd[0] == 3:
        Node.insert_next(nodes[cmd[1]], nodes[cmd[2]])
    else:
        if nodes[cmd[1]].prev is not None:
            print(nodes[cmd[1]].prev.data, end=' ')
        else:
            print(0, end=' ')
        if nodes[cmd[1]].next is not None:
            print(nodes[cmd[1]].next.data)
        else:
            print(0)

for i in range(1, N+1):
    if nodes[i].next is not None:
        print(nodes[i].next.data, end=' ')
    else:
        print(0, end=' ')