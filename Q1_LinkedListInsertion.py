class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def insert(head,val):
    n=Node(val)
    n.next=head
    return n
def print_list(h):
    while h:
        print(h.data,end=" ")
        h=h.next
head=None
head=insert(head,3)
head=insert(head,2)
head=insert(head,1)
print_list(head)