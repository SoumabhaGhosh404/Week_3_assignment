class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def nth_from_end(head,n):
    first=second=head
    for _ in range(n):
        if not second:return
        second=second.next
    while second:
        first=first.next
        second=second.next
    print(first.data)
head=Node(1)
head.next=Node(2)
head.next.next=Node(3)
nth_from_end(head,2)