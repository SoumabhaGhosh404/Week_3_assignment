class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def add(l1,l2):
    res=None
    last=None
    carry=0
    while l1 or l2 or carry:
        s=(l1.data if l1 else 0)+(l2.data if l2 else 0)+carry
        carry=s//10
        s%=10
        n=Node(s)
        if not res:
            res=last=n
        else:
            last.next=n
            last=n
        l1=l1.next if l1 else None
        l2=l2.next if l2 else None
    return res
def print_list(h):
    while h:
        print(h.data,end=" ")
        h=h.next
l1=Node(2);l1.next=Node(4)
l2=Node(5);l2.next=Node(6)
sum_list=add(l1,l2)
print_list(sum_list)