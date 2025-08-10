class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def search(h,key):
    while h:
        if h.data==key:
            return True
        h=h.next
    return False
head=Node(1)
head.next=Node(2)
print(search(head,2))