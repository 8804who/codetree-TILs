class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

    def insert_next(u, singleton):
        singleton.prev = u
        singleton.next = u.next

        if singleton.prev is not None:
            singleton.prev.next = singleton
        if singleton.next is not None:
            singleton.next.prev = singleton
    
    def insert_prev(u, singleton):
        singleton.prev = u.prev
        singleton.next = u

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

S_init = input()
n = Node(S_init)
N = int(input())
for i in range(N):
    cmd = list(input().split(' '))
    if cmd[0] == '1':
        Node.insert_prev(n, Node(cmd[1]))
    elif cmd[0] == '2':
        Node.insert_next(n, Node(cmd[1]))
    elif cmd[0] == '3':
        if n.prev is not None:
            n = n.prev
    else:
        if n.next is not None:
            n = n.next
    
    if n.prev is not None:
        print(n.prev.data, end=' ')
    else:
        print("(Null)", end=' ')
    print(n.data, end=' ')
    if n.next is not None:
        print(n.next.data)
    else:
        print("(Null)")