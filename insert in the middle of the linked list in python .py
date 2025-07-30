class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_middle(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        slow = self.head
        fast = self.head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        new_node.next = slow.next
        slow.next = new_node

    def print_list(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

ll = LinkedList()
n = int(input("Enter number of nodes: "))
for _ in range(n):
    data = int(input("Enter data for node: "))
    new_node = Node(data)
    if ll.head is None:
        ll.head = new_node
    else:
        temp = ll.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

print("Original List:")
ll.print_list()

data = int(input("Enter data to insert in the middle: "))
ll.insert_middle(data)

print("List after insertion:")
ll.print_list()
