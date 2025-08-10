class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def insert_mid(prev,val):
    if not prev:return
    n=Node(val)
    n.next=prev.next
    prev.next=n
def print_list(h):
    while h:
        print(h.data,end=" ")
        h=h.next
head=Node(1)
head.next=Node(3)
insert_mid(head,2)
print_list(head)