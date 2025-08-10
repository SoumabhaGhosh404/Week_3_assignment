class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def print_list(h):
    while h:
        print(h.data)
        h=h.next
head=Node(1)
head.next=Node(2)
print_list(head)