class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def remove_loop(loop_node,head):
    p1=head
    while True:
        p2=loop_node
        while p2.next!=loop_node and p2.next!=p1:
            p2=p2.next
        if p2.next==p1:
            p2.next=None
            return
        p1=p1.next
def detect_and_remove(head):
    slow=fast=head
    while fast and fast.next:
        slow=slow.next
        fast=fast.next.next
        if slow==fast:
            remove_loop(slow,head)
            return
head=Node(1)
head.next=Node(2)
head.next.next=head
detect_and_remove(head)