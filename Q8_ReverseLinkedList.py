class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def reverse(head):
    prev=None
    cur=head
    while cur:
        nxt=cur.next
        cur.next=prev
        prev=cur
        cur=nxt
    return prev
def print_list(h):
    while h:
        print(h.data,end=" ")
        h=h.next
head=Node(1)
head.next=Node(2)
head=reverse(head)
print_list(head)