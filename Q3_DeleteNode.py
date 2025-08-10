class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def delete_node(head,key):
    if head and head.data==key:
        return head.next
    prev=head
    cur=head.next if head else None
    while cur and cur.data!=key:
        prev=cur
        cur=cur.next
    if cur:
        prev.next=cur.next
    return head
def print_list(h):
    while h:
        print(h.data,end=" ")
        h=h.next
head=Node(1)
head.next=Node(2)
head=delete_node(head,1)
print_list(head)