class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def detect_loop(h):
    slow=fast=h
    while fast and fast.next:
        slow=slow.next
        fast=fast.next.next
        if slow==fast:
            return True
    return False
head=Node(1)
head.next=Node(2)
head.next.next=head
print(detect_loop(head))